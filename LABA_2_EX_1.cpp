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
    double r;
    
    cout << "Enter x: ";
    std::cin >> x;
    
    cout << "Enter y: ";
    std::cin >> y;
    
    if(x >= 0) {
        r = ( exp(-x) ) * tan( 1 / ( pow( x, 2 ) + 8.2 ) );   
    } else {
        r = x * ( 0.32 * x + 2.5 ) / ( pow( x, 2 ) + 3 );
    }
    
    std::cout << "Your result: " <<  r;
}