#include <iostream>
#include <algorithm>

int main()
{
    int w, l, h;
    std::cin >> w >> l >> h;
	
    if (std::min(w, l) / h >= 2 && std::max(w, l) / std::min(w, l) <= 2)
        std::cout << "good";
    else
        std::cout << "bad";
    return 0;
}