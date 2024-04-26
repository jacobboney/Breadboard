#pragma once
#include <vector>
#include "terminal.h"
#include "terminalstrips.h"

class Terminal; //Forward Declaration of Class
class TerminalStrips; //Forward Declaration of Class

class TerminalGroup {

    public:

        TerminalGroup(void* newParent);
        ~TerminalGroup();

        void testFunction();

        std::vector<Terminal*> getGroup();

    private:

        void* parent;
        std::vector<Terminal*> group;
        double output;

};