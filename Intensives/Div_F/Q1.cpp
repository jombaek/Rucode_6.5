#include <iostream>

int main()
{
    int n, n1, n10, n60;

    std::cin >> n;

    n60 = n / 60;
    n10 = n % 60 / 10;
    n1 = n % 10;

    if (n1 * 15 > 125)
    {
        n1 = 0;
        ++n10;
    }

    if (n1 * 15 + n10 * 125 > 440)
    {
        n1 = 0;
        n10 = 0;
        ++n60;
    }
    
    std::cout << n1 << " " << n10 << " " << n60;

    return 0;
}