#pragma once
#include <vector>
#include "terminal.h"

class Terminal; //Forward Declaration of Class

class TerminalGroup {

    public:

        TerminalGroup();
        ~TerminalGroup();

        void testFunction();

    private:

        std::vector<Terminal*> group;
        double output;

};