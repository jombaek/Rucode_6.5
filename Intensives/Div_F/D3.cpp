#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int n, m;
    std::cin >> n;

    std::vector<int> a(n);
    std::unordered_map<int, int> umap;

    for (int i = 0; i < n; ++i)
        std::cin >> a[i];

    std::cin >> m;
    std::vector<int> b(m);

    for (int i = 0; i < m; ++i)
    {
        std::cin >> b[i];
        ++umap[b[i]];
    }

    for (int i = 0; i < n; ++i)
    {
        if (umap[a[i]] > 0)
        {
            std::cout << a[i] << " ";
            --umap[a[i]];
        }
    }

    return 0;
}