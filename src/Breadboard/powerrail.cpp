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

void PowerRail::printLine(int index, std::string type) {

    Terminal* terminalPos;
    Terminal* terminalNeg;
    double    terminalPosValue;
    double    terminalNegValue;
    int       terminalGroup = -1;

    if(index < 5)       { terminalGroup = 0; }
    else if(index < 10) { terminalGroup = 1; }
    else if(index < 15) { terminalGroup = 2; }
    else if(index < 20) { terminalGroup = 3; }
    else if(index < 25) { terminalGroup = 4; }

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