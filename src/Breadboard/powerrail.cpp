#include "powerrail.h"

PowerRail::PowerRail(Breadboard* newParent) {

    parent = newParent;

    for(int i = 0; i < 5; i++) {
        railPos.push_back(new TerminalGroup(this));
    };

    for(int i = 0; i < 5; i++) {
        railNeg.push_back(new TerminalGroup(this));
    };
};

PowerRail::~PowerRail() {

};

std::vector<TerminalGroup*> PowerRail::getRailPos() {

    return railPos;

}

std::vector<TerminalGroup*> PowerRail::getRailNeg() {

    return railNeg;
    
}

int PowerRail::getTerminalGroup(int index)
{
    if(index < 5)       { return 0; }
    else if(index < 10) { return 1; }
    else if(index < 15) { return 2; }
    else if(index < 20) { return 3; }
    else if(index < 25) { return 4; }
    else                { return -1; }
}

Terminal* PowerRail::setConnection(void* connector, char column, int row) {
    if(row < 25) {
        int terminalGroup = getTerminalGroup(row);
        if(column == 'P') {
            return railPos.at(terminalGroup)->setConnection(connector, row);
        }
        else if(column == 'N') {
            return railNeg.at(terminalGroup)->setConnection(connector, row);
        }
    }
    else {
        std::cout << "Row does not exist" << std::endl;
        return nullptr;
    }
    return nullptr;
}

void PowerRail::setRailPosOutput(Electricity output) {
    this->railPosOutput = output;
    for(TerminalGroup* each : railPos) {
        each->setOutput(this->railPosOutput, false);
    }
}

void PowerRail::printLine(int index, std::string type) {

    Terminal* terminalPos;
    Terminal* terminalNeg;
    double    terminalPosValue;
    double    terminalNegValue;
    int       terminalGroup;

    terminalGroup = getTerminalGroup(index);

    if(terminalGroup != -1) {
        terminalPos = railPos.at(terminalGroup)->getGroup().at(index % 5);
        terminalNeg = railNeg.at(terminalGroup)->getGroup().at(index % 5);
    }

    if(type == "input" && index < 25) {
        terminalPosValue = terminalPos->getInput().voltage;
        terminalNegValue = terminalNeg->getInput().voltage;
    }
    else if(type == "output" && index < 25) {
        terminalPosValue = terminalPos->getOutput().voltage;
        terminalNegValue = terminalNeg->getOutput().voltage;
    }
    else {
        std::cout << "               ";
        return;
    }

    // Printing positive terminal
    std::ostringstream posStream;
    posStream << std::fixed << std::setprecision(4) << terminalPosValue;
    std::string posString = posStream.str();
    while (posString.length() < 5) {
        posString += " ";
    }
    std::cout << posString;


    // Spacer
    std::cout << "   ";


    // Printing negative terminal
    std::ostringstream negStream;
    negStream << std::fixed << std::setprecision(4) << terminalNegValue;
    std::string negString = negStream.str();
    while(negString.length() < 5) {
        negString += " ";
    }
    std::cout << negString;

}