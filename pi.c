
#include <stdio.h>
#include <math.h>
 
double pi(void);
 
int main(void) {
 
		printf("%f\n",pi() );
 
 
	}
 
	double pi (void)  {
 
		double pi = 0, key, pianterior;
		int x;
 
		for ( x = 0; x < 1000000; x++) {
 
 			key = pow(-1,x)/(2*x + 1);
 			key*=4;
 			pianterior = pi;
			pi = pianterior + key;
 
		}
 
 
		return pi;
 
	}