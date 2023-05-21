#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip> 
#include <limits>

int main()
{
    int n = 5, sum = 0;
	int minScore = std::numeric_limits<int>::max();
	int maxScore = std::numeric_limits<int>::min();
    std::vector<int> v(n);

    for (auto i = 0; i < n; ++i)
    {
        std::cin >> v[i];
    
    	if (v[i] > maxScore)
        	maxScore = v[i];
    
    	if (v[i] < minScore)
        	minScore = v[i];
    	
    	sum += v[i];
    }

    std::cout << minScore << " " << maxScore << '\n';
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << (sum - minScore - maxScore) / 3.0;

    return 0;
}