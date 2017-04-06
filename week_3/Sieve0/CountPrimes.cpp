

//void Project1::foo(int &i) {
//	i = 1;
//}


int countPrimes(int limit) {

    // declare prime array - 0 to limits
    // initialise indexes 0 and 1 to false and all others to true
    bool * isPrime = new bool[limit+1];
    isPrime[0] = false;
    isPrime[1] = false;

    for (int i=2; i<limit+1;i++) {
        isPrime[i] = true;
    }

    for (int i=2; i<limit+1; i++) {
        if (isPrime[i]==false) continue;

        int divisor = i;
        for (int j=i+1; j<limit+1; j++) {
            if( j % divisor == 0) {
                isPrime[j] = false;
            }
        }
    }

    int count = 0;
    for ( int i=0; i<limit+1; i++) {
        if (isPrime[i]) count++;
    }

    delete[] isPrime;

    return count;
}