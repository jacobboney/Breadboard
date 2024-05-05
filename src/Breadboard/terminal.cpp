#include "terminal.h"

Terminal::Terminal(TerminalGroup* newGroup) {
    group = newGroup;
    connection = nullptr;
};

Terminal::~Terminal() { };

TerminalGroup* Terminal::getGroup() { return group; }
void* Terminal::getConnection()     { return connection; }
Electricity Terminal::getInput()    { return input; }
Electricity Terminal::getOutput()   { return output; }

void Terminal::setGroup(TerminalGroup* newGroup)  { group = newGroup; }
Terminal* Terminal::setConnection(void* newConnection) { 
    connection = newConnection;
    std::cout << "Connection set" << std::endl;
    return this;
}
void Terminal::setInput(Electricity newInput)     
{ 
    input = newInput; 
    //Do calcs in the future for current loss?
    setOutput(this->input, false);
    
}
void Terminal::setOutput(Electricity newOutput, bool calledFromGroup) { 
    this->output = newOutput; 
    
    if(!calledFromGroup) {
        group->setOutput(this->output, true);
    }

    if(connection != nullptr) {
        if(typeid(connection) == typeid(Wire)) {
            Wire* tempWire = reinterpret_cast<Wire*>(connection);
            tempWire->setInput(this->output);
        }
    }

}