#include <iostream>
#include "../cpputils/ioutils.h"

using namespace std;

int main() {

    println("This program reverses the digits in an integer.");
    println("Enter a positive integer: ");

    string input = getWord();

    // iterate over the string and swap the nth char with the nth last char
    // eg. 2nd char is swapped with 2nd last char
    for (int i=0; i<input.length()/2; i++) {
        char temp = input[i];

        input[i] = input[input.length()-1-i];
        input[input.length()-1-i] = temp;
    }

    println("The reversed number is: " + input);


    return 0;
}