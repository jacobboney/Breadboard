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
void Terminal::setConnection(void* newConnection) { connection = newConnection; }
void Terminal::setInput(Electricity newInput)     { input = newInput; }
void Terminal::setOutput(Electricity newOutput)   { input = newOutput; }