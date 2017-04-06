//
// Created by WadeJensen on 10/03/2017.
//

#ifndef MYFIRSTCPP_TOOLBOX_H
#define MYFIRSTCPP_TOOLBOX_H

#include <iostream>

//template <typename T>
//T print(T printable);

//template <typename T>
//T println(T printable);

template <typename T>
void print (T printable) {
    std::cout << printable;
}

template <class T>
void println (T printable) {
    std::cout << printable << std::endl;
}

//void print(T printable);

//void println(T printable);

std::string getWord();
std::string getln();

int getInt();

double getDouble();

#endif //MYFIRSTCPP_TOOLBOX_H
