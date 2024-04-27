#include <iostream>
#include "Breadboard/breadboard.h"

int main(int argc, char *argv[]) {

    Breadboard* testBread = new Breadboard();

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
            testBread->debugPrint(printType);
        }
        else if(userInput == "exit") {
            runProgram = false;
        }
    }

    return 0;
}