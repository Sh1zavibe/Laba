#include <iostream>

long double mysqrt(long double x) {
  long double left = 0, right = x;
  for (int i = 0; i <= 200; i++) {
    long double middle = (left + right) / 2; // функция корня
    if (middle * middle < x)
      left = middle;
    else
      right = middle;
  }
  return right;
}

int main() {
  // std::cout.precision(5);
  long double x1, y1, x2, y2, x3, y3;
  std::cout << "Введите координаты трех вершин треугольника (16 байт)";
  std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  long double str1, str2, str3; // стороны треугольника
  str1 = mysqrt(((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) * 1000000) /
         mysqrt(1000000);
  str2 = mysqrt(((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)) * 1000000) /
         mysqrt(1000000);
  str3 = mysqrt(((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)) * 1000000) /
         mysqrt(1000000);
  if (str1 + str2 <= str3 || str1 + str3 <= str2 || str2 + str3 <= str1)
    std::cout << "Треугольника не существует";
  else {
    std::cout << "Стороны треугольника: " << str1 << " " << str2 << " " << str3
              << '\n';
    long double polyP = (str1 + str2 + str3) / 2;
    long double S = mysqrt(polyP * (polyP - str1) * (polyP - str2) *
                           (polyP - str3)); // 1 способ рассчета площади
    long double h1 = 2 * S / str1, h2 = 2 * S / str2, h3 = 2 * S / str3;
    std::cout << "Высота проведенная к первой стороне = " << h1 << '\n'
              << "Высота проведенная ко второй стороне = " << h2 << '\n'
              << "Высота проведенная к третьей стороне = " << h3 << '\n';

    long double cos1 =
                    (str2 * str2 + str3 * str3 - str1 * str1) / 2 / str2 / str3,
                cos2 =
                    (str1 * str1 + str3 * str3 - str2 * str2) / 2 / str1 / str3,
                cos3 = (str2 * str2 + str1 * str1 - str3 * str3) / 2 / str2 /
                       str1; // косинусы углов
    long double mediana1 =
                    mysqrt(str2 * str2 + str3 * str3 + 2 * str2 * str3 * cos1) /
                    2,
                mediana2 =
                    mysqrt(str1 * str1 + str3 * str3 + 2 * str1 * str3 * cos2) /
                    2,
                mediana3 =
                    mysqrt(str2 * str2 + str1 * str1 + 2 * str2 * str1 * cos3) /
                    2; // медианы треугольника
    std::cout << "Медианы треугольника равны : " << mediana1 << " " << mediana2
              << " " << mediana3 << '\n';

    long double bis1, bis2, bis3;
    bis1 = mysqrt(str2 * str3 * (str2 + str3 + str1) * (str2 + str3 - str1)) /
           (str2 + str3);
    bis2 = mysqrt(str1 * str3 * (str1 + str3 + str2) * (str1 + str3 - str2)) /
           (str1 + str3); // биссектрисы треугольника
    bis3 = mysqrt(str2 * str1 * (str2 + str1 + str3) * (str2 + str1 - str3)) /
           (str2 + str1);
    std::cout << "Биссектрисы равны : " << bis1 << " " << bis2 << " " << bis3
              << '\n';

    long double arccos1, arccos2, arccos3;
    const long double pi = 3.14159265;
    arccos1 = pi / 2 - cos1 - cos1 * cos1 * cos1 / 2 / 3 -
              3 * cos1 * cos1 * cos1 * cos1 * cos1 / 2 / 4 / 5;
    arccos2 = pi / 2 - cos2 - cos2 * cos2 * cos2 / 2 / 3 -
              3 * cos2 * cos2 * cos2 * cos2 * cos2 / 2 / 4 / 5;
    arccos3 = pi / 2 - cos3 - cos3 * cos3 * cos3 / 2 / 3 -
              3 * cos3 * cos3 * cos3 * cos3 * cos3 / 2 / 4 / 5;
    std::cout << "угол напротив первой стороны : " << arccos1 << " в радианах, "
              << arccos1 * 180 / pi << " в градусах" << '\n';
    std::cout << "угол напротив второй стороны : " << arccos2 << " в радианах, "
              << arccos2 * 180 / pi << " в градусах"
              << '\n'; // градусные меры углов
    std::cout << "угол напротив третей стороны : " << arccos3 << " в радианах, "
              << arccos3 * 180 / pi << " в градусах" << '\n';

    long double R = str1 * str2 * str3 / 4 / S, r = S / polyP;
    std::cout << "Радиус описанной окружности = " << R << '\n'
              << "Радиус вписанной окружности = " << r << '\n';

    long double CR = 2 * pi * R, Cr = 2 * pi * r, SR = pi * R * R,
                Sr = pi * r * r;
    std::cout << "Длинна описанной окружности = " << CR
              << "  Её площадь = " << SR << '\n';
    std::cout << "Длинна вписанной окружности = " << Cr
              << "  Её площадь = " << Sr << '\n';

    long double Per = str1 + str2 + str3;
    std::cout << "Периметр треугольника равен = " << Per << '\n';

    std::cout << "Площадь треугольника через Герона = " << S << '\n';
    S = str1 * h1 / 2;
    std::cout << "Площадь треугольника через сторону и высоту = " << S << '\n';
    S = str1 * str3 * mysqrt(10 - cos2 * cos2 * 100000) / 2 / mysqrt(100000);
    std::cout << "Площадь треугольника через синус угла = " << S << '\n';
  }
  return 0;
}