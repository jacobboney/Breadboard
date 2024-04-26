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
        std::cout << each->getInput() << std::endl;
    }
    
}

std::vector<Terminal*> TerminalGroup::getGroup() {

    return group; 

}