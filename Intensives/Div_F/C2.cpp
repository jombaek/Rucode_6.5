#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    std::string ans;

    while (n)
    {
        ans += std::to_string(n % 2);
        n /= 2;
    }

    std::cout << ans;

    return 0;
}