#include <iostream>
#include "../ccputils/ioutils.h"

using namespace std;

#define METRES_PER_INCH 0.0254
#define INCHES_PER_FOOT 12.00

int main() {

    print("Enter a distance in meters: ");
    double distance = getDouble();


    int feet = (int) distance/METRES_PER_INCH/INCHES_PER_FOOT;
    double inches = distance/METRES_PER_INCH - feet*INCHES_PER_FOOT;

    println( to_string(distance) + "m = " + to_string(feet) + " feet and " + to_string(inches) + " inches." );

    return 0;
}