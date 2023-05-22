#include <iostream>

int main() {
    int a, b, c, d, t;
    std::cin >> a >> b >> c >> d;

    for (int i = a; i <= b; ++i)
    {
        t = i % d;
        if (t == c)
            std::cout << i << " ";
    }
    

    return 0;
}