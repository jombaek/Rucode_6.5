#include <iostream>
#include <vector>

int main() {
    int L, N, M;
    std::cin >> L >> N >> M;

    std::vector<int> cnt(L + 2, 0);

    for (int i = 0; i < N; ++i)
    {
        int l, r;
        std::cin >> l >> r;
        cnt[l]++;
        cnt[r + 1]--;
    }

    int c = 0;
    std::vector<int> res(L + 2);

    for (int i = 1; i < L + 2; ++i)
    {
        c += cnt[i];
        res[i] = c;
    }
    
    for (int i = 0; i < M; ++i)
    {
        int t;
        std::cin >> t;
        std::cout << res[t] << "\n";
    }

    return 0;
}