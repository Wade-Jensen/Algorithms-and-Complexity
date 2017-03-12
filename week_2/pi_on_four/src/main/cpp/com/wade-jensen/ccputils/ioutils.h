//
// Created by WadeJensen on 10/03/2017.
//

#ifndef MYFIRSTCPP_TOOLBOX_H
#define MYFIRSTCPP_TOOLBOX_H

template<typename T> inline void print(T output) {
    std::cout << output;
}

template<typename T> inline void println(T output) {
    std::cout << output;
}

std::string getWord();
std::string getln();

int getInt();

double getDouble();

#endif //MYFIRSTCPP_TOOLBOX_H
