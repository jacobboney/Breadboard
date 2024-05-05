#include "psu.h"

Psu::Psu(Electricity input, Electricity output) {
    this->input = input;
    this->output = output;
}

Psu::~Psu()
{}

Electricity Psu::getInput() { return this->input; }
Electricity Psu::getOutput() { return this->output; }

Terminal* Psu::getConnectionPos()
{
    return connectionPos;
}

void Psu::setConnectionPos(Terminal *newConnection)
{
    this->connectionPos = newConnection;
    std::cout << "PSU - pos connection set" << std::endl;

}

Terminal* Psu::getConnectionNeg()
{
    return connectionNeg;
}

void Psu::setConnectionNeg(Terminal *newConnection) {
    this->connectionNeg = newConnection;
    std::cout << "PSU - neg connection set" << std::endl;
}

void Psu::setInput(Electricity newInput) { this->input = newInput; }

void Psu::setOutput(Electricity newOutput) { this->output = newOutput; }
