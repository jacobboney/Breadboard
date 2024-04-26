#include "terminalstrips.h"

TerminalStrips::TerminalStrips() {

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
    
}