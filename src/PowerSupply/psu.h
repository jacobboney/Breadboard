#pragma once
#include "../Breadboard/terminal.h"

class Psu {

public:
    Psu(Electricity input, Electricity output);
    ~Psu();

    Electricity getInput();
    Electricity getOutput();

    Terminal* getConnectionPos();
    void setConnectionPos(Terminal* newConnection);   
    Terminal* getConnectionNeg();
    void setConnectionNeg(Terminal* newConnection); 

    void setInput(Electricity newInput);
    void setOutput(Electricity newOutput);

private: 
    Terminal* connectionPos;
    Terminal* connectionNeg;
    Electricity input;
    Electricity output;
};