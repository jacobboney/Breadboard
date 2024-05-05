#pragma once
#include "../Breadboard/terminal.h"

class Psu {

public:
    Psu(Electricity input, Electricity output);
    ~Psu();

    Electricity getInput();
    Electricity getOutput();

    void setInput(Electricity newInput);
    void setOutput(Electricity newOutput);

private: 
    Terminal* connection;
    Electricity input;
    Electricity output;
};