#include "wire.h"

Wire::Wire(int newWireGauge, Terminal* newConnectionA, Terminal* newConnectionB) {

    this->wireGauge = newWireGauge;
    this->connectionA = newConnectionA;
    this->connectionB = newConnectionB;

};

Wire::~Wire(){

};

int Wire::getWireGauge() {

    return wireGauge;

};

void Wire::setWireGauge(int newWireGauge) {

    this->wireGauge = newWireGauge;

}

double Wire::getInput() {

    return input;

};

void Wire::setInput(double newInput) {

    this->input = newInput;

};

double Wire::getOutput() {

    return output;

};

void Wire::setOutput(double newOutput) {

    this->output = newOutput;

};