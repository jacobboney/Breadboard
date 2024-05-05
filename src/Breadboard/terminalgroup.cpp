#include "terminalgroup.h"
#include <iostream>

TerminalGroup::TerminalGroup(void* newParent) {
    
    parent = newParent;
    for(int i = 0; i < 5; i++) {
        group.push_back(new Terminal(this));
    }

};

TerminalGroup::~TerminalGroup() {

    for(Terminal* each : group) {
        delete each;
    }

};

void TerminalGroup::testFunction() {

    for (Terminal* each : group) {
        std::cout << each->getInput().voltage << std::endl;
    }
    
}

std::vector<Terminal*> TerminalGroup::getGroup() { return group;  }

void TerminalGroup::setOutput(Electricity newOutput, bool calledFromTerminal) { 
    this->output = newOutput; 
    for(Terminal* each : group) {
        each->setOutput(this->output, true);
    }
    if(calledFromTerminal) {

        if(typeid(*reinterpret_cast<PowerRail*>(this->parent)) == typeid(PowerRail*)) {
            std::cout << "Made it now" << std::endl;
            PowerRail* tempPowerRail = reinterpret_cast<PowerRail*>(parent);
            tempPowerRail->setRailPosOutput(this->output);
        }
    }
}

Terminal* TerminalGroup::setConnection(void *connector, int row)
{
    return group.at(row)->setConnection(connector);
}
