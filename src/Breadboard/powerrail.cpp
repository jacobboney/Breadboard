#include "powerrail.h"

PowerRail::PowerRail(Breadboard* newParent) {

    parent = newParent;
    
    for(int i = 0; i < 10; i++) {
        railPos.push_back(new TerminalGroup(this));
    };

    for(int i = 0; i < 10; i++) {
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