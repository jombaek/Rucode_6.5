#include <iostream>
#include <vector>

int main() {
    int n, count = 0;
    std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
        std::cin >> v[i];

    for (int i = 1; i < n - 1; ++i)
    {
        if (v[i - 1] < v[i] && v[i] > v[i + 1])
            ++count;
    }

    std::cout << count << "\n";

    return 0;
}