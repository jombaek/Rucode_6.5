#include <iostream>

int main() {
    int a, b, n, r, k;
    std::cin >> a >> b >> n;

    k = (b * n) % 100;
    r = (a * n) + (b * n) / 100;

    std::cout << r << " " << k;

    return 0;
}