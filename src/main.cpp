#include <iostream>
#include "Breadboard/breadboard.h"
#include "PowerSupply/psu.h"

int main(int argc, char *argv[]) {

    //Power from wall
    Electricity wallPower;
    wallPower.voltage = 120.0;
    wallPower.amperage = 15.0;

    //Power to breadboard
    Electricity desiredOutput;
    desiredOutput.voltage = 5.0;
    desiredOutput.amperage = 1.0;

    //Creating power supply
    Psu* powerSupply = new Psu(wallPower, desiredOutput);

    //Creation of breadboard
    Breadboard* breadboardA = new Breadboard();

    //Connecting power to breadboard
    

    bool runProgram = true;
    while(runProgram) {

        std::string userInput;
        std::cout << "What would you like to do?: ";
        std::cin >> userInput;
        std::cout << std::endl;

        if(userInput == "print") {
            std::string printType;
            std::cout << "What would you like to print?: ";
            std::cin >> printType;
            std::cout << std::endl;
            breadboardA->debugPrint(printType);
        }
        else if(userInput == "exit") {
            runProgram = false;
        }
    }

    return 0;
}