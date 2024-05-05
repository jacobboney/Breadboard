#pragma once
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>

#include "../Electricity/electricity.h"
#include "terminal.h"
#include "terminalgroup.h"
#include "breadboard.h"

class Terminal; //Forward Declaration of Class
class TerminalGroup; //Forward Declaration of Class
class Breadboard; //Forward Declaration of Class

class PowerRail {

    public:

        PowerRail(Breadboard* newParent);
        ~PowerRail();

        std::vector<TerminalGroup*> getRailPos();
        std::vector<TerminalGroup*> getRailNeg();
        int getTerminalGroup(int index);

        Terminal* setConnection(void *connector, char column, int row);
        void setRailPosOutput(Electricity output);

        void printLine(int index, std::string type);

    private:

        Breadboard* parent;
        std::vector<TerminalGroup*> railPos;
        std::vector<TerminalGroup*> railNeg;

        Electricity railPosOutput;

};