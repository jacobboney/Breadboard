#pragma once
#include "terminalgroup.h"
#include "../Electricity/electricity.h"
#include "../Connectors/wire.h"

class TerminalGroup; //Forward Declaration of Class

class Terminal {

    public:

        Terminal(TerminalGroup* newGroup);
        ~Terminal();

        TerminalGroup* getGroup();
        void setGroup(TerminalGroup* group);

        void* getConnection();
        Terminal* setConnection(void* newConnection);

        Electricity getInput();
        void setInput(Electricity newInput);

        Electricity getOutput();
        void setOutput(Electricity newOutput, bool calledFromGroup);

        

    private:
        TerminalGroup* group;
        void* connection;
        Electricity input;
        Electricity output;

};