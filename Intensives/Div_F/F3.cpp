#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N, t, k = 0, idx = 0;
    std::cin >> N;
    std::vector<int> v(N);

    for (int i = 0; i < N; ++i)
        std::cin >> v[i];

    std::sort(v.begin(), v.end());
    std::cout << v[0] << " " << v[1];

    return 0;
}