#include <iostream>

int main() {
    int k, p, s;
    std::cin >> k >> p >> s;

    std::cout << (s * 100) / (k * (100 + p));

    return 0;
}