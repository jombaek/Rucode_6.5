#include <iostream>
#include <vector>
#include <limits>

int main() {
    int n, x, dist, ans;
    int minDist = std::numeric_limits<int>::min();;
    std::cin >> n;

    std::vector<int> v(n);

    for (int i = 0; i < n; ++i)
        std::cin >> v[i];
    
    std::cin >> x;

    for (int i = 0; i < n; ++i)
    {
        dist = abs(v[i] - x);

        if (dist < minDist)
        {
            minDist = dist;
            ans = v[i];
        }
    }

    std::cout << ans << "\n";

    return 0;
}