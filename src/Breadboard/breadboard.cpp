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

void debugPrint() {

}