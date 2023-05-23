#include <iostream>
#include <string>

int main() {
    int n;
    std::cin >> n;

    if (n < 10)
    {
        std::cout << 1 << n << "\n";
        return 0;
    }

    std::string m;

    for (int d = 9; d > 1; --d)
    {
        while (n % d == 0)
        {
            m += std::to_string(d);
            n /= d;
        }
    }

    if (n > 1)
        std::cout << "No solution\n";
    else
        std::cout << std::string(m.rbegin(), m.rend()) << "\n";

    return 0;
}