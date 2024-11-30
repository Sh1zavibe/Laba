
#include <iostream>

int main()
{
    std::cout<< "Введите число х (16 байт)";
    long double x, a, b, c;
    std::cin >> x;
    a = x * x;
    b = 69 * a + 8;
    c = x * (23 * a + 32);
    std::cout << "23x^3 + 69x^2 + 32x + 8 = " << b + c << '\n' << "-23x^3 + 69x^2 -32x + 8 = " << b - c << '\n';
    return 0;
}       