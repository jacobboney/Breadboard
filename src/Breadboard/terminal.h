#pragma once

class Terminal {

    public:

        Terminal();
        ~Terminal();

        void* getConnection();
        void setConnection(void* newConnection);

        double getInput();
        double setInput(double newInput);

        double getOutput();
        double setOutput(double newOutput);

    private:
        void* connection;
        double input;
        double output;

};