#include "terminal.h"

Terminal::Terminal() {

    connection = nullptr;
    input = 0.0;
    output = 0.0;

};

Terminal::~Terminal() {

    delete connection;

};

void* Terminal::getConnection() {

    return connection;

};

void Terminal::setConnection(void* newConnection) {

    connection = newConnection;

};

double Terminal::getInput() {

    return input;

};

double Terminal::setInput(double newInput) {

    input = newInput;

};

double Terminal::getOutput() {

    return output;

};

double Terminal::setOutput(double newOutput) {

    input = newOutput;

};