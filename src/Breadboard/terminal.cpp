#include "terminal.h"

Terminal::Terminal(TerminalGroup* newGroup) {

    group = newGroup;
    connection = nullptr;
    input = 0.0;
    output = 0.0;

};

Terminal::~Terminal() {

};

TerminalGroup* Terminal::getGroup() {

    return group;

};

void Terminal::setGroup(TerminalGroup* newGroup) {

    group = newGroup;

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

void Terminal::setInput(double newInput) {

    input = newInput;

};

double Terminal::getOutput() {

    return output;

};

void Terminal::setOutput(double newOutput) {

    input = newOutput;

};