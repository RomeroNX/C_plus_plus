// Ex 2

// Example program
#include <iostream>
#include <string>
#include <math.h>
#include <cmath>

int main()
{
    
	int a = 2;
	double b = 12.11;
	double result;
 
	result = (0.5 * (log(a) + log(b) ) ) / cbrt(cos(pow(a + b, 2) ) + exp(a) * (M_PI / 6));
 
	std::cout << result;
 
}