#include <iostream>
#include <limits>

int main() {
    int x;
    int firstMax = std::numeric_limits<int>::min();
    int secondMax = std::numeric_limits<int>::min();

    while (std::cin >> x)
    {
        if (x == 0)
            break;

        if (x > firstMax)
        {
            secondMax = firstMax;
            firstMax = x;
        }
        else if (x > secondMax)
            secondMax = x;
    }

    std::cout << secondMax;

    return 0;
}