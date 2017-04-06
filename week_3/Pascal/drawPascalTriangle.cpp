

//void Project1::foo(int &i) {
//	i = 1;
//}


#include <cstdio>
#include "cpputils/ioutils.h"

int drawPascalTriangle(int numRows) {

    //debugging
    char str[100];

    // declare memory for 2D array
    int ** triangle = new int*[numRows];
    // allocate row length depending on row number

    //std::string str = "Wade";

    for (int i=0; i<numRows; i++) {
        triangle[i] = new int[i+1];
        triangle[i][0] = 1;
        // debugging
        println("\n");
        sprintf(str,"triangle[%d][%d]=%d",i,0,triangle[i][0]);
        println(str);

        triangle[i][i] = 1;

        // debugging
        sprintf(str,"triangle[%d][%d]=%d",i,i,triangle[i][i]);
        println(str);

        for (int j=1; j<i; j++) {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
            //debugging
            sprintf(str,"triangle[%d][%d]=%d",i,j,triangle[i][j]);
            println(str);
        }
    }

    return numRows;
}