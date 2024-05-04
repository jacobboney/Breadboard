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

        double terminalValue;

        if(type == "input")       { terminalValue = each->getInput().voltage; }
        else if(type == "output") { terminalValue = each->getOutput().voltage; }

        //Printing the terminal
        std::ostringstream terminalStream;
        terminalStream << std::fixed << std::setprecision(4) << terminalValue;
        std::string terminalString = terminalStream.str();
        while(terminalString.length() < 5) {
            terminalString += " ";
        }
        std::cout << terminalString;

        //Spacing
        std::cout << "   ";

    }
};