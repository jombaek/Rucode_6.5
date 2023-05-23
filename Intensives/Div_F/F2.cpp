#include <iostream>
#include <cmath>


int main() {
    double n, k, x, ans = 0;
    std::cin >> n >> k;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> x;
        ans += std::ceil(x / k);
    }

    std::cout << ans;
    return 0;
}