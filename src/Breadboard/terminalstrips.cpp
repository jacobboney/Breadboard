#include "terminalstrips.h"

TerminalStrips::TerminalStrips(Breadboard* newParent) {

    parent = newParent;
    
    for(int i = 0; i < 30; i++) {
        strip.push_back(new TerminalGroup(this));
    }

};

TerminalStrips::~TerminalStrips() {

    for(TerminalGroup* each : strip) {
        delete each;
    };

};

std::vector<TerminalGroup*> TerminalStrips::getStrip() {

    return strip;

};

void TerminalStrips::printLine(int index, std::string type) {

    for(Terminal* each : strip.at(index)->getGroup()) {
        if(type == "input") {
            std::cout << each->getInput();
        }
        else if(type == "output") {
            std::cout << each->getOutput();
        }
    }
};