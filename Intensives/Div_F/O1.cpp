#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip> 

int main()
{
    int n = 5;
    std::vector<int> v(n);

    for (auto i = 0; i < n; ++i)
        std::cin >> v[i];

    std::sort(v.begin(), v.end());

    std::cout << v[0] << " " << v[n - 1] << '\n';

    int sum = 0;
    for (auto i = 1; i < n - 1; ++i)
        sum += v[i];

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << sum / 3.0;

    return 0;
}