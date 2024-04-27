#include "breadboard.h"

Breadboard::Breadboard() {

    //Initialize Power Rails
    powerRailA = new PowerRail(this);
    powerRailB = new PowerRail(this);

    //Initialize Terminal Strips
    terminalStripA = new TerminalStrips(this);
    terminalStripB = new TerminalStrips(this);

};

Breadboard::~Breadboard() {

    //Delete Power Rails
    delete powerRailA, powerRailB;

    //Delete Terminal Strips
    delete terminalStripA, terminalStripB;

};

void Breadboard::debugPrint(std::string type) {

    if (type == "input" || type == "output")
    {
        std::cout << "---------------------------" << std::endl;
        std::cout << "| +     -     A     B     C     D     E     F     G     H     I     J     +     -      |" << std::endl;
        for (int i = 0; i < 30; i++)
        {
            std::cout << "| ";
            powerRailA->printLine(i, type);
            if (i < 9)
            {
                std::cout << " ";
            }
            std::cout << " " << i + 1 << " ";
            terminalStripA->printLine(i, type);
            std::cout << " ";
            terminalStripB->printLine(i, type);
            if (i < 9)
            {
                std::cout << " ";
            }
            std::cout << " " << i + 1 << " ";
            powerRailB->printLine(i, type);
            std::cout << " |" << std::endl;
        }
        std::cout << "---------------------------" << std::endl;
    }
};