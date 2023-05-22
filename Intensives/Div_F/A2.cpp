#include <iostream>

int main() {
    int x, sum = 0;

    while (std::cin >> x)
    {
        if (x == 0)
            break;

        sum += x;
    }

    std::cout << x;

    return 0;
}