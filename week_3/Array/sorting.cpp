#include "sorting.h"

//void Project1::foo(int &i) {
//	i = 1;
//}


bool isSorted(int* arr, int arrSize) {
	// throw exception if (arrSize <= 0)
    if (arrSize == 1) {
        return true;
    }

    int previous = arr[0];
    for (int i=1; i<arrSize; i++) {
        if (previous <= arr[i] ) {
            previous = arr[i];
        }
        else return false;
    }

    return true;
}