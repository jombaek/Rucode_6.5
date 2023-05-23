#include <iostream>
#include <cmath>

int main() {
    int m;
    std::cin >> m;

    int i = std::sqrt(m);

    while (i)
    {
        if (m % (i * i) == 0)
        {
            std::cout << i * i << "\n";
            return 0;
        }

        --i;
    }

    return 0;
}