#pragma once
#include <vector>

#include "terminalgroup.h"
#include "breadboard.h"

class TerminalGroup; //Forward Declaration of Class
class Breadboard; //Forward Declaration of Class

class PowerRail {

    public:

        PowerRail(Breadboard* newParent);
        ~PowerRail();

        std::vector<TerminalGroup*> getRailPos();
        std::vector<TerminalGroup*> getRailNeg();

    private:

        Breadboard* parent;
        std::vector<TerminalGroup*> railPos;
        std::vector<TerminalGroup*> railNeg;

};