#include "breadboard.h"

Breadboard::Breadboard() {

    //Initialize Power Rails
    powerRailA = new PowerRail(this);
    powerRailB = new PowerRail(this);

    //Initialize Terminal Strips
    terminalStripA = new TerminalStrips(this);
    terminalStripB = new TerminalStrips(this);

}

Breadboard::~Breadboard() {

    //Delete Power Rails
    delete powerRailA; 
    delete powerRailB;

    //Delete Terminal Strips
    delete terminalStripA; 
    delete terminalStripB;

}

Terminal* Breadboard::setConnection(void *connector, char column, int row) {

    if(row - 1 < 30) {
        if(column == 'W' || column == 'X') {
            if(column == 'W') { return powerRailA->setConnection(connector, 'P', row - 1); }
            else              { return powerRailA->setConnection(connector, 'N', row - 1); }
        }
        else if(column == 'Y' || column == 'Z') {
            if(column == 'Y') { return powerRailB->setConnection(connector, 'P', row - 1); }
            else              { return powerRailB->setConnection(connector, 'N', row - 1); }
        }
        else if(column == 'A' || column == 'B' || column == 'C' || column == 'D' || column == 'E') {
            return nullptr;
        }
        else if(column == 'F' || column == 'G' || column == 'H' || column == 'I' || column == 'J') {
            return nullptr;
        }
        else {
            std::cout << "Column does not exist" << std::endl;
            return nullptr;
        }
    }
    else {
        std::cout << "Row does not exist" << std::endl;
        return nullptr;
    }

    std::cout << "Breadboard conneciton failing" << std::endl;
    return nullptr;
}

void Breadboard::debugPrint(std::string type) {

    if (type == "input" || type == "output")
    {
        std::cout << "----------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
        std::cout << "| +        -               A        B        C        D        E         F        G        H        I        J               +        -      |" << std::endl;
        for (int i = 0; i < 30; i++)
        {
            std::cout << "| ";
            powerRailA->printLine(i, type);
            if (i < 9)
            {
                std::cout << " ";
            }
            std::cout << "   " << "(" << i + 1 << ")" << "   ";
            terminalStripA->printLine(i, type);
            std::cout << " ";
            terminalStripB->printLine(i, type);
            if (i < 9)
            {
                std::cout << " ";
            }
            std::cout << "(" << i + 1 << ")" << "   ";
            powerRailB->printLine(i, type);
            std::cout << " |" << std::endl;
        }
        std::cout << "----------------------------------------------------------------------------------------------------------------------------------------------" << std::endl;
    }
}