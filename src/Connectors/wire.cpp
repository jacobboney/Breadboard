#include "wire.h"

Wire::Wire(int newWireGauge, Terminal* newConnectionA, Terminal* newConnectionB) {

    this->wireGauge = newWireGauge;
    this->connectionA = newConnectionA;
    this->connectionB = newConnectionB;

};

Wire::~Wire(){

};

int Wire::getWireGauge()      { return wireGauge; }
Electricity Wire::getInput()  { return input; }
Electricity Wire::getOutput() { return output; }

void Wire::setWireGauge(int newWireGauge)   { this->wireGauge = newWireGauge; }
void Wire::setInput(Electricity newInput)   { this->input = newInput; }
void Wire::setOutput(Electricity newOutput) { this->output = newOutput; }