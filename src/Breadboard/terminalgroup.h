#pragma once
#include <vector>
#include "terminal.h"
#include "terminalstrips.h"
#include "../Electricity/electricity.h"

class Terminal; //Forward Declaration of Class
class TerminalStrips; //Forward Declaration of Class

class TerminalGroup {

    public:

        TerminalGroup(void* newParent);
        ~TerminalGroup();

        void testFunction();

        std::vector<Terminal*> getGroup();

        void setOutput(Electricity newOutput, bool calledFromTerminal);
        Terminal* setConnection(void* connector, int row);

    private:

        void* parent;
        std::vector<Terminal*> group;
        Electricity output;

};