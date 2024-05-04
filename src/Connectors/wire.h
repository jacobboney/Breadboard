#pragma once
#include "../Breadboard/terminal.h"

class Wire {

    public:

        Wire(int newWireGauge, Terminal* newConnectionA, Terminal* newConnectionB);
        ~Wire();

        int getWireGauge();
        void setWireGauge(int newWireGauge);

        double getInput();
        void setInput(double newInput);

        double getOutput();
        void setOutput(double newOutput);

        Terminal* getConnectionA();
        void setConnectionA(Terminal* newConnectionA);

        Terminal* getConnectionB();
        void setConnectionB(Terminal* newConnectionB);

    private:

        int wireGauge;
        double input;
        double output;
        Terminal* connectionA;
        Terminal* connectionB;

};