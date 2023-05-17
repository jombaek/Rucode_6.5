#include <iostream>
#include <cmath>

int main() {
    int n, m;
    std::cin >> n >> m;

    std::cout << std::ceil((double)m / n);

    return 0;
}