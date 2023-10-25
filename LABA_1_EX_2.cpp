#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#define M_PI 3.141592653589793288456

int main()
{
    
	int a = 2;
	double b = 12.11;
	double result;
 
	result = (0.5 * (log(a) + log(b) ) ) / cbrt(cos(pow(a + b, 2) ) + exp(a) * (M_PI / 6));
 
	std::cout << result;
 
}