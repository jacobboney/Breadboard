#include <iostream>
#include "Breadboard/terminal.h"
#include "Breadboard/terminalgroup.h"
#include "Breadboard/terminalstrips.h"

int main(int argc, char *argv[]) {

    std::cout << "Hello World" << std::endl;

    TerminalStrips testStrip;

    for(int i = 0; i < testStrip.getStrip().size(); i++) {
        TerminalGroup* currentGroup = testStrip.getStrip().at(i);
        for(int j = 0; j < currentGroup->getGroup().size(); j ++) {
            Terminal* currentTerminal = currentGroup->getGroup().at(j);
            std::cout << currentTerminal->getInput();
        }
        std::cout << std::endl;
    }

    return 0;
}