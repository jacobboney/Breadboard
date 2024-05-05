#include "psu.h"

Psu::Psu(Electricity input, Electricity output)
{
}

Psu::~Psu()
{
}

Electricity Psu::getInput() { return Electricity(); }
Electricity Psu::getOutput() { return Electricity(); }

void Psu::setInput(Electricity newInput) {
    this->input = newInput;
}

void Psu::setOutput(Electricity newOutput) {
    this->output = newOutput;
}
