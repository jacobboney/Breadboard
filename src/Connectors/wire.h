#pragma once
#include "../Breadboard/terminal.h"

class Wire {

    public:

        Wire(int newWireGauge, Terminal* newConnectionA, Terminal* newConnectionB);
        ~Wire();

        int getWireGauge();
        void setWireGauge(int newWireGauge);

        Electricity getInput();
        void setInput(Electricity newInput);

        Electricity getOutput();
        void setOutput(Electricity newOutput);

        Terminal* getConnectionA();
        void setConnectionA(Terminal* newConnectionA);

        Terminal* getConnectionB();
        void setConnectionB(Terminal* newConnectionB);

    private:

        int wireGauge;
        Electricity input;
        Electricity output;
        Terminal* connectionA;
        Terminal* connectionB;

};