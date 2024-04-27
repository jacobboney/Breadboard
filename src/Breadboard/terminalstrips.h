#pragma once
#include <vector>
#include "terminalgroup.h"
#include "breadboard.h"

class TerminalGroup; //Forward Declaration of Class
class Breadboard; //Forward Declaration of Class

class TerminalStrips {

    public:

        TerminalStrips(Breadboard* newParent);
        ~TerminalStrips();

        std::vector<TerminalGroup*> getStrip();

        void printLine(int index, std::string type);

    private:

        Breadboard* parent;
        std::vector<TerminalGroup*> strip;

};