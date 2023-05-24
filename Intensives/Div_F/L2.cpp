#include <iostream>
#include <limits>

int main() {
    int x;
    int maxNum = std::numeric_limits<int>::min();

    while (std::cin >> x)
    {
        if (x == 0)
            break;

        if (x > maxNum)
            maxNum = x;
    }

    std::cout << maxNum;

    return 0;
}