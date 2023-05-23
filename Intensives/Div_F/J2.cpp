#include <iostream>

int main() {
    int s, n, x, backpack = 0, baggage = 0;
    std::cin >> s >> n;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> x;

        if (backpack + x <= s)
            backpack += x;
        else
            baggage += x;
    }

    std::cout << backpack << " " << baggage << "\n";
    return 0;
}