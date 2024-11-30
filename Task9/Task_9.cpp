#include <cmath>
#include <iostream>

int main()
{
    std::cout << "Дано выражение : b*f(x)/cos x + a * ln|tg(x/2)|" << '\n';
    std::cout << "Введите переменную z (16 байт) для определения значения x : ";
    long double z, x, b, a;
    std::cin >> z;
    if(z <= 0)
        x = z * z / 2;
    else
        x = sqrt(z);
    if(cos(x) == 0 || cos(x / 2) == 0)
        std::cout << "Значение выражения не существует";
    else
    {
        if(fabs(tan(x / 2)) <= 0)
            std::cout << "Значения выражения не существует";
        else
        {
            std::cout << "Введите значения переменных b и a (16 байт): ";
            std::cin >> b >> a;
            short n;
            std::cout << "Выберите вариацию f(x): " << '\n';
            std::cout << "1) f(x) = 2x" << '\n' << "2) f(x) = x^3" << '\n' << "3) f(x) = x/3" << '\n';
            std::cout << "Введите номер вашего варианта (целочисленное значение от 1 до 3 включительно): " << '\n';
            std::cin >> n;
            switch (n)
            {
                case 1:
                    std::cout << "Значение выражения : " << b * 2 * x / cos(x) + a * log(fabs(tan(x / 2))) << '\n';
                    break;
                case 2:
                    std::cout << "Значение выражения : " << b * x * x * x / cos(x) + a * log(fabs(tan(x / 2))) << '\n';
                    break;
                case 3:
                    std::cout << "Значение выражения : " << b * x / 3 / cos(x) + a * log(fabs(tan(x / 2))) << '\n';
                    break;
            }
        }
    }
    return 0;
}