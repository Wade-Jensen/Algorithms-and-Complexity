#include <iostream>
#include "../ccputils/ioutils.h"

using namespace std;

int main() {
    println("Enter a positive number 'n'. We will calculate the sum of all numbers up to 'n'");

    while(1) {
        int n = getInt();
        int sum = 0;

        if (n > 0) {
            for (int i=0; i<n; i++) {
                sum +=i;
            }
            print("1+2+3+...+" + )
            println(sum);
            break;
        }
        else println("Please enter a positive number.");

        return 0;

    }
}