#include "wire.h"

Wire::Wire(int newWireGauge, Terminal* newConnectionA, Terminal* newConnectionB) {

    wireGauge = newWireGauge;
    connectionA = newConnectionA;
    connectionB = newConnectionB;

};

Wire::~Wire(){

};

int Wire::getWireGauge() {

    return wireGauge;

};

void Wire::setWireGauge(int newWireGauge) {

    wireGauge = newWireGauge;

}

double Wire::getInput() {

    return input;

};

void Wire::setInput(double newInput) {

    input = newInput;

};

double Wire::getOutput() {

    return output;

};

void Wire::setOutput(double newOutput) {

    output = newOutput;

};