#pragma once
#include <iostream>

#include "powerrail.h"
#include "terminalstrips.h"

class PowerRail;
class TerminalStrips;

class Breadboard {

    public: 

        Breadboard();
        ~Breadboard();

        PowerRail* getPowerRailA();
        PowerRail* getPowerRailB();

        TerminalStrips* getTerminalStripA();
        TerminalStrips* getTerminalStripB();

        void debugPrint(std::string type);

    private:

        PowerRail* powerRailA;
        PowerRail* powerRailB;

        TerminalStrips* terminalStripA;
        TerminalStrips* terminalStripB;
};