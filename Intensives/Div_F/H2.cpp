#include <iostream>

int main() {
    int n, k, m, l, r, count = 0;
    std::cin >> n >> k >> m;

    l = k / m;

    while (l)
    {
        r = n / k;

        if (r == 0)
            break;

        count += r * l;

        n = n % k + (r * (k % m));
    }

    std::cout << count << "\n";

    return 0;
}