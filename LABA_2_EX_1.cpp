// Example program
#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{
    
    double x;
    double y;
    double res;
    
    cout << "Enter x: ";
    std::cin >> x;
    
    cout << "Enter y: ";
    std::cin >> y;
    
    if(x >= 0) {
        res = ( exp(-x) ) * tan( 1 / ( pow( x, 2 ) + 8.2 ) );   
    } else {
        res = x * ( 0.32 * x + 2.5 ) / ( pow( x, 2 ) + 3 );
    }
    
    std::cout << "Your result: " <<  res;
}