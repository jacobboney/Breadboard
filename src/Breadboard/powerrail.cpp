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

    if(index < 5) {
        // std::cout << railPos.at(0)->getGroup().at(index % 5)->getOutput();
        // std::cout << railNeg.at(0)->getGroup().at(index % 5)->getOutput();
        terminalPos = railPos.at(0)->getGroup().at(index % 5);
        terminalNeg = railNeg.at(0)->getGroup().at(index % 5);
    }
    else if(index < 10) {
        // std::cout << railPos.at(1)->getGroup().at(index % 5)->getOutput();
        // std::cout << railNeg.at(1)->getGroup().at(index % 5)->getOutput();
        terminalPos = railPos.at(1)->getGroup().at(index % 5);
        terminalNeg = railNeg.at(1)->getGroup().at(index % 5);
    }
    else if(index < 15) { 
        // std::cout << railPos.at(2)->getGroup().at(index % 5)->getOutput();
        // std::cout << railNeg.at(2)->getGroup().at(index % 5)->getOutput();
        terminalPos = railPos.at(2)->getGroup().at(index % 5);
        terminalNeg = railNeg.at(2)->getGroup().at(index % 5);
    }
    else if(index < 20) {
        // std::cout << railPos.at(3)->getGroup().at(index % 5)->getOutput();
        // std::cout << railNeg.at(3)->getGroup().at(index % 5)->getOutput();
        terminalPos = railPos.at(3)->getGroup().at(index % 5);
        terminalNeg = railNeg.at(3)->getGroup().at(index % 5);
    }
    else if(index < 25) {
        // std::cout << railPos.at(4)->getGroup().at(index % 5)->getOutput();
        // std::cout << railNeg.at(4)->getGroup().at(index % 5)->getOutput();
        terminalPos = railPos.at(4)->getGroup().at(index % 5);
        terminalNeg = railNeg.at(4)->getGroup().at(index % 5);
    }

    if(type == "input" && index < 25) {

        std::cout << std::setprecision(4) << terminalPos->getInput();
        std::cout << std::setprecision(4) << terminalNeg->getInput();
        
    }
    else if(type == "output" && index < 25) {
        std::cout << terminalPos->getOutput();
        std::cout << terminalNeg->getOutput();
    }
    else {
        std::cout << "  ";
    }
}