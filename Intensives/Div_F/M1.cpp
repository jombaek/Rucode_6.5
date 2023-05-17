#include <iostream>

int main()
{
    int a, b, n;
    std::cin >> a >> b >> n;

    if (b % n > 0)
    {
        if (a > (b / n + 1))
            std::cout << "Yes";
        else
            std::cout << "No";
    }
    else if (a > (b / n))
        std::cout << "Yes";
    else
        std::cout << "No";

    return 0;
}