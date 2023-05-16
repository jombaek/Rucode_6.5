#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    int a2 = a | 1;
    int b2 = b & ~1;
    int ans = (b2 - a2 + 1) / 2;

    if (b % 2 == 1)
        ans -= b;

    if (a % 2 == 0)
        ans += a;

    std::cout << ans;

    return 0;
}