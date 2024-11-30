#include <iostream>

int main()
{
    std::cout<< "Введите значения х и у (8 байт)";
    long long x, y;
    std::cin >> x >> y;
    std::cout<< "Введите значение а b с и к (16 байт)";
    if(x < y)
        x = 0;
    else
        if(y < x)
            y = 0;
        else
        {
            x = 0;
            y = 0;
        }
    long double a, b, c, k;
    std::cin >> a >> b >> c >> k;
    if(a > b && a > c)
        a-=k;
    else
        {
            if(b > a && b > c)
                b-=k;
            else
                c-=k;
        }
    std::cout << x << " " << y << '\n' << a << " " << b << " " << c;
}