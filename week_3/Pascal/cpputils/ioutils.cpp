//
// Created by WadeJensen on 10/03/2017.
//

#include <iostream>


/*
void print(std::string str) {
    std::cout << str;
}

void print(char * str) {
    std::cout << str;
}

void print(const char str[]) {
    std::cout << str;
}

void print(int output) {
    std::cout << output;
}

void println(std::string str) {
    std::cout << str << std::endl;
}

void println(char * str) {
    std::cout << str << std::endl;
}

void println(const char * str) {
    std::cout << str << std::endl;
}

void println(int output) {
    std::cout << output << std::endl;
}
*/
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
