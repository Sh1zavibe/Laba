#include <iostream>

int main()
{
    std::cout << "Введите значения сторон греугольника (16 байт)" << '\n';
    long double x, y, z;
    std::cin >> x >> y >> z;
    if(x + y > z)
    {
        if(x + z > y)
        {
            if(y + z > x)
            {
                std::cout << "Треугольник существует";
            }
            else
            std::cout << "Треугольник не существует";
        }
        else
        std::cout << "Треугольник не существует";
    }
    else
    std::cout << "Треугольник не существует";
}