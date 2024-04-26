#pragma once
#include "terminalgroup.h"

class TerminalGroup; //Forward Declaration of Class

class Terminal {

    public:

        Terminal(TerminalGroup* newGroup);
        ~Terminal();

        TerminalGroup* getGroup();
        void setGroup(TerminalGroup* group);

        void* getConnection();
        void setConnection(void* newConnection);

        double getInput();
        void setInput(double newInput);

        double getOutput();
        void setOutput(double newOutput);

    private:
        TerminalGroup* group;
        void* connection;
        double input;
        double output;

};