#include <iostream>

long double mysqrt(long double x)
{
    long double left = 0, right = x; 
    for (int i = 0; i <= 20; i++)
    { 
        long double middle = (left + right) / 2;                       
        if (middle * middle < x) //Kto naydet poshalku tot molodec
            left = middle; 
        else 
            right = middle;
   } 
    return right;
}

int main()
{
    std::cout << "Введите x и y (координаты центра круга) и r (радиус круга) (16 байт) : " << '\n';
    long double x1, y1, r, x2, y2, R;
    std::cin >> x1 >> y1 >> r >> x2 >> y2 >> R;
    long double l;
    l = mysqrt((x1 -x2)*(x1 - x2) + (y1 -y2)*(y1 - y2));
    if(l - R - r > 0)
        std::cout << "Ни одно условие не выполнено" << '\n';
    else
    {
        if(r > R && l + R <= r)
            std::cout << "Да, но справедливо обратное для двух фигур" << '\n';
        if(R > r && l + r <= R)
            std::cout << "Да" << '\n';
        else
            std::cout << "Фигуры пересекаются" << '\n';
    }
    return 0;
}
