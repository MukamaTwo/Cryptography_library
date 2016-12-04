// Compilation (compile the _test file, which includes this file):
//   g++ -o cryptoLib cryptoLib_test.cpp
// Running:
//   ./cryptoLib

#include <stdio.h>

/**
 * Assigns to the array "result" the values "result[0] = gcd", "result[1] = s"
 * and "result[2] = t" such that "gcd" is the greatest common divisor of "a" and
 * "b", and "gcd = a * s + b * t".
 **/
void EEA(int a, int b, int result[]) {
    // Note: as you can see in the test suite,
    // your function should work for any (positive) value of a and b.
    int gcd = -1;
    int s = -1;
    int t = -1;
    result[0] = gcd;
    result[1] = s;
    result[2] = t;
}

/**
 * Returns Euler's Totient for value "n".
 **/
int EulerPhi(int n){
    return -1;
}

/**
 * Returns the value "v" such that "n*v = 1 (mod m)".
 * Returns 0 if the modular inverse does not exist.
 **/
int ModInv(int n, int m){
    return -1;
}

/**
 * Returns 0 if "n" is a Fermat Prime, otherwise it returns the lowest Fermat
 * Witness. Tests values from 2 (inclusive) to "n/3" (exclusive).
 **/
int FermatPT(int n){
    return -1;
}

/**
 * Returns the probability that calling a perfect hash function with "n_samples"
 * (uniformly distributed) will give one collision (i.e. that two samples result
 * in the same hash) -- where "size" is the number of different output values
 * the hash function can produce.
 **/
double HashCP(double n_samples, double size){
    return -1;
}