#include <iostream>
#include "../ccputils/ioutils.h"

using namespace std;

int main() {

    println("How many iterations do you want to use to approximate pi? ");
    int n = getInt();

    long double pi_on_four = 0;
    int sign = 1;
    for (int i = 0; i<n; i++) {
        sign*=-1; // flip the sign of the Leibniz series term from previous iteration
        double num = -1*sign;
        double den = (2*i+1);
        pi_on_four+= num/den;
    }
    long double pi = 4*pi_on_four;
    print("Pi = ");
    println(pi);

    return 0;
}