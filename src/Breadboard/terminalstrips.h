#pragma once
#include <vector>
#include "terminalgroup.h"
#include "breadboard.h"

class TerminalGroup; //Forward Declaration of Class
class Breadboard; //Forward Declaration of Class

class TerminalStrips {

    public:

        TerminalStrips();
        ~TerminalStrips();

        std::vector<TerminalGroup*> getStrip();

    private:

        std::vector<TerminalGroup*> strip;

};