#include <iostream>

int main() {
    int a, b, l, n;
    std::cin >> a >> b >> l >> n;

    std::cout << (2 * a * n - a) + 2 * b * (n - 1) + 2 * l;

    return 0;
}