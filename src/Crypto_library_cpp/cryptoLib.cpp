// Compilation (compile the _test file, which includes this file):
//   g++ -o cryptoLib cryptoLib_test.cpp
// Running:
//   ./cryptoLib

#include <stdio.h>
#include <math.h>       /* pow */

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
	

/** calculate (a ^ n1) % mod **/
	int powerModulo(int a, int n1, int mod){
		int res=1;
		//res^g+1=res*res^g
		for (int i = 0; i < n1; i++){
			res =res * a;
			res =res % mod;
		}
		return res % mod;
	}
	
/**
 * Returns 0 if "n" is a Fermat Prime, otherwise it returns the lowest Fermat
 * Witness. Tests values from 2 (inclusive) to "n/3" (exclusive).
 **/
int FermatPT(int n){
	int  i=0,k=0,lowestwitness=0, a=2, limit=n/3;
	
	while(a<limit){
		//n is probably prime or a is a fermat witness
	  if (powerModulo(a, n-1, n) == 1) {				
		  i++;				 
	  } else{
		  if(k==0){		   //store lowest witness
		      lowestwitness=a;
		  }
		  k++;
	  }		  
	a++;
	}  
	//number that is relatively prime with all n/3
	if(i+2==limit )      
	     return 0;		
	else
		return lowestwitness;
}

/**
 * Returns the probability that calling a perfect hash function with "n_samples"
 * (uniformly distributed) will give one collision (i.e. that two samples result
 * in the same hash) -- where "size" is the number of different output values
 * the hash function can produce.
 **/
double HashCP(double n_samples, double size){
	double power=n_samples*n_samples/(2*size);	
	return 1-exp(-power);
}