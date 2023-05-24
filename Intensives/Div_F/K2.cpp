#include <iostream>

int main() {
    int n;
    char c;
    bool isPositive = true;

    std::cin >> n;
    std::cout << '9';
    
    while (n--)
    {
        std::cin >> c;
        
        switch (c)
        {
            case '+':
                std::cout << '9';
                isPositive = true;
                break;
            case '-':
                std::cout << '1';
                isPositive = false;
                break;
            case '*':
                std::cout << (isPositive ? 9 : 1);
                break;
            case '/':
                std::cout << (isPositive ? 1 : 9);
                break;
        }
    }

    return 0;
}