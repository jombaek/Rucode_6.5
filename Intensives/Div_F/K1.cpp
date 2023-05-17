#include <iostream>

int main() {
    int switch1, switch2, switch3, switch4;
    std::cin >> switch1 >> switch2 >> switch3 >> switch4;

    int k = switch1 + switch2 + switch3 + switch4;

    if (k < 2)
        std::cout << "NO";
    else
    {
        if (k >= 3)
            std::cout << "YES";
        else
        {
            bool lightOn = true;

            if ((switch1 == 1 && switch2 == 1 && switch3 == 0 && switch4 == 0) ||
                (switch1 == 0 && switch2 == 0 && switch3 == 1 && switch4 == 1) ||
                (switch1 == 0 && switch2 == 1 && switch3 == 1 && switch4 == 0))
                lightOn = false;

            if (lightOn)
                std::cout << "YES";
            else
                std::cout << "NO";
        }
    }

    return 0;
}