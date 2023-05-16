#include <iostream>

int main() {
    int x;
    std::cin >> x;

    if (x > 0)
        std::cout << 1;
    else if (x < 0)
        std::cout << -1;
    else
        std::cout << 0;

    return 0;
}