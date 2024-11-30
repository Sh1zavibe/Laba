#include <iostream>

int main()
{
    std::cout<< "Введите значение х и у ";
    long long x, y;
    std::cin >> x >> y;
    if(x > y)
        std::cout << x;
    else
        std::cout << y;
    return 0;
}