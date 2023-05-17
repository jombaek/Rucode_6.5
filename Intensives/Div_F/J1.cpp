#include <iostream>
#include <cmath>
#include <iomanip>

double sideLenght(int x, int y, int x1, int y1)
{
    return sqrt((double)(x - x1) * (x - x1) + (double)(y - y1) * (y - y1));
}

int main() {
    int x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    std::cout << sideLenght(x1, y1, x2, y2) + sideLenght(x2, y2, x3, y3) + sideLenght(x3, y3, x1, y1);

    return 0;
}