#include <iostream>
#include "Breadboard/breadboard.h"

int main(int argc, char *argv[]) {

    Breadboard* testBread = new Breadboard();

    testBread->debugPrint();

    return 0;
}