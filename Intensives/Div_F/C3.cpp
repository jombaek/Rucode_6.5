#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> nums(n);
    std::unordered_map<int, int> umap;

    for (int i = 0; i < n; ++i)
    {
        std::cin >> nums[i];
        ++umap[nums[i]];
    }

    for (auto& num : nums)
    {
        if (umap[num] == 1)
            std::cout << num << " ";
    }
    
    return 0;
}