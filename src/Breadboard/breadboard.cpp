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

void Breadboard::debugPrint() {

    std::cout << "---------------------------" << std::endl;
    std::cout << "| +-    ABCDE FGHIJ    +- |" << std::endl;
    for(int i = 0; i < 30; i++) {
        std::cout << "| ";
        powerRailA->printLine(i);
        if(i < 9) { std::cout << " "; }
        std::cout << " " << i + 1 << " ";
        terminalStripA->printLine(i);
        std::cout << " ";
        terminalStripB->printLine(i);
        if(i < 9) { std::cout << " "; }
        std::cout << " " << i + 1 << " ";
        powerRailB->printLine(i);
        std::cout << " |" << std::endl;
    }
    std::cout << "---------------------------" << std::endl;

};