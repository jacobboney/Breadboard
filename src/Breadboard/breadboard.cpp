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
    delete powerRailA, powerRailB;

    //Delete Terminal Strips
    delete terminalStripA, terminalStripB;

}

void Breadboard::setConnection(void *connector, char column, int row) {

    void* terminalLocation;

    std::string columns = "ABCDEFGHIJWXYZ";

    if(row - 1 < 30) {
        for(int i = 0; i < columns.length(); i++) {
            char tempLetter = columns[i];
            if(tempLetter == 'W' || tempLetter == 'X') {
                
            }
            else if(tempLetter == 'Y' || tempLetter == 'Z') {

            }
            else if(tempLetter == 'A' || tempLetter == 'B' || tempLetter == 'C' || tempLetter == 'D' || tempLetter == 'E') {

            }
            else if(tempLetter == 'A' || tempLetter == 'B' || tempLetter == 'C' || tempLetter == 'D' || tempLetter == 'E') {

            }
            else {
                std::cout << "Column does not exist" << std::endl;
            }
        }
    }
    else {
        std::cout << "Row does not exist" << std::endl;
    }



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