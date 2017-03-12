//
// Created by WadeJensen on 10/03/2017.
//

#include <iostream>




template<typename T> void println(T output) {
    std::cout << output << std::endl;
}

std::string getWord() {
    std::string input;
    std::cin >> input;
    return input;
}

std::string getln() {
    std::string input;
    std::getline (std::cin,input);
    return input;
}

int getInt() {
    int input;
    std::cin >> input;
    return input;
}

double getDouble() {
    double input;
    std::cin >> input;
    return input;
}
