#include <cmath>
#include <iostream>

int main() {
  std::cout << "Дано уравнение y = sin(x) - cos(x), найдём корни на промежутке "
               "[A, B], где А = 0 и В = pi / 2 :"
            << '\n';
  double x, a = 0, b = acos(-1.0) / 2, m = 20;
  double h = (b - a) / m;
  std::cout << "Каждый шаг будем увеличивать x на " << h << '\n';
  for (double i = 0; i <= m; i++) {
    x = a + i * h;
    std::cout << "x = " << x << '\n';
    std::cout << "y = " << sin(x) - cos(x) << '\n' << '\n';
  }
  std::cout << "Задание выполнил Данильчк Матвей 453504\n";
}