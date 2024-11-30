#include <iostream>

int main()
{
    long long a, b;
    std::cout << "НОД чисел a и b" << '\n';
    std::cout << "Введите a, b (целые значения) : " ;
    std::cin>> a >> b;
    long long  k = 0;
    std::cout << "Шаг " << k << " a = " << a << " b = " << b << '\n';
    while(b != 0)
    {
        long long r = b;
        b = a % b;
        a = r;
        k++;
        std::cout << "Шаг " << k << " a = " << a << " b = " << b << '\n';
    }
    if(a >= 0)
        std::cout << "НОД = " << a << '\n';
    else
        std::cout << "НОД = " << -a << '\n';
}