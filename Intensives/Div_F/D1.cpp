#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;

    std::cout << (n - k % n) % n;

    return 0;
}