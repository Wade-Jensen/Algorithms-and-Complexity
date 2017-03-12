#include <iostream>
#include "../ccputils/ioutils.h"

using namespace std;

int main() {
    println("This program finds the largest integer in a list.");
    println("Enter 0 to signal the end of the list.");

    int input = 9999; // an arbitrary non-zero number
    int largest = 0; // memory to store the largest value entered by the user
    while ( input != 0 ) {
        input = getInt();
        if (input > largest) {
            largest = input;
        }
    }

    println("The largest value is "+ to_string(largest));

    return 0;
}