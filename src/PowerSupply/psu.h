#pragma once
#include "../Electricity/electricity.h"

class Psu {

public:
    Psu(Electricity input, Electricity output);
    ~Psu();

    Electricity getInput();
    Electricity getOutput();

    void setInput(Electricity newInput);
    void setOutput(Electricity newOutput);

private: 
    Electricity input;
    Electricity output;
};