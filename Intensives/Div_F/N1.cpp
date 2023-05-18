#include <iostream>

int main()
{
    int N, M, K, ans;
    std::cin >> N >> M >> K >> ans;
	
    int d1 = (ans > N) ? ans - N : N - ans;
    int d2 = (ans > M) ? ans - M : M - ans;
    int d3 = (ans > K) ? ans - K : K - ans;
    
    if (d1 < d2 && d1 < d3)
        std::cout << "Anton";
    else if (d2 < d1 && d2 < d3)
        std::cout << "Misha";
    else if (d3 < d1 && d3 < d2)
        std::cout << "Lesha";
    else
        std::cout << "Draw";
	
    return 0;
}