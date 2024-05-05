#pragma once
#include <iostream>

#include "powerrail.h"
#include "terminalstrips.h"
#include "terminal.h"

class PowerRail;
class TerminalStrips;
class Terminal;

class Breadboard {

    public: 

        Breadboard();
        ~Breadboard();

        PowerRail* getPowerRailA();
        PowerRail* getPowerRailB();

        TerminalStrips* getTerminalStripA();
        TerminalStrips* getTerminalStripB();

        Terminal* setConnection(void* connector, char column, int row);
        void debugPrint(std::string type);

    private:

        PowerRail* powerRailA;
        PowerRail* powerRailB;

        TerminalStrips* terminalStripA;
        TerminalStrips* terminalStripB;
};