#include <iostream>

int main()
{
    int h1, h2, min1, min2, h, min;
    std::cout << "Введите время начала выполнения задания (час минута) : ";
    std::cin >> h1 >> min1 ;
    std::cout << "Введите время окончания выполнения задания (час минута) : ";
    std::cin >> h2 >> min2;
    if(min2 > min1)
        min = min2 - min1;
    else
    {
        if(min2 == min1)
            min = 0;
        else
        {
            min = 60 - min1 + min2;
            h2--; 
        }
    }
    if(h2 > h1)
        h = h2 - h1;
    else
    {
        if(h2 == h1)
            h = 0;
        else
            h = 24 - h1 + h2;
    }
    std::cout << "Время выполнения = " << h << " часов и " << min << " минут" << '\n';
    return 0;
}