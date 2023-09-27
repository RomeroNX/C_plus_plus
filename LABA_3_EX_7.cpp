#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double a, b, c, d, e;

    std::cin >> a >> b >> c >> d >> e;

    std::cout << std::fixed << std::setprecision(1) << a << std::endl;
    std::cout << std::fixed << std::setprecision(2) << b << std::endl;
    std::cout << std::fixed << std::setprecision(6) << c << std::endl;
    std::cout << std::fixed << std::setprecision(2) << d << std::endl;
    std::cout << std::fixed << std::setprecision(0) << e << std::endl;
    return 0;
}
