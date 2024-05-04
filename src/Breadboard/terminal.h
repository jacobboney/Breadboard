#pragma once
#include "terminalgroup.h"
#include "../Electricity/electricity.h"

class TerminalGroup; //Forward Declaration of Class

class Terminal {

    public:

        Terminal(TerminalGroup* newGroup);
        ~Terminal();

        TerminalGroup* getGroup();
        void setGroup(TerminalGroup* group);

        void* getConnection();
        void setConnection(void* newConnection);

        Electricity getInput();
        void setInput(Electricity newInput);

        Electricity getOutput();
        void setOutput(Electricity newOutput);

    private:
        TerminalGroup* group;
        void* connection;
        Electricity input;
        Electricity output;

};