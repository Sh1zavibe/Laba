#include <cmath>
#include <iomanip>
#include <iostream>

bool povtor;

int main() {
  while (povtor == 0) {
    std::cout << "Дана функция f(x) = e^x - sin(cos(x))\n\n";
    std::cout << "Диапазон значений х : от -2 до  0\n\n";
    std::cout
        << "Найдём f(x) = 0, перебирая корни с определённым интервалом.\n";
    std::cout << "Введите на сколько частей вы хотите разделить область поиска "
                 "корня, (значение должно быть натуральным!) : ";
    long long chasti;
    while (!(std::cin >> chasti) || std::cin.get() != '\n' || chasti <= 0) {
      std::cout << "Ошибка ввода" << '\n'
                << "Ещё раз введите на сколько частей вы хотите разделить "
                   "область поиска корня :";
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }
    long double step = 2.0 / chasti;
    std::cout << "Шаг = " << step << '\n';
    long double minn = fabs(exp(-2) - sin(cos(-2))), xminn = -2;
    for (long double i = -2 + step; i <= 0; i += step) {
      if (fabs(exp(i) - sin(cos(i))) <= minn) {
        minn = fabs(exp(i) - sin(cos(i)));
        xminn = i;
      }
    }
    std::cout << "f(x) ближе всего к 0 при х = " << xminn << '\n' << '\n';
    std::cout << "Для повтора программы введите 0\n";
    std::cout << "Для выхода из программы введите 1\n";
    while (!(std::cin >> povtor) || std::cin.get() != '\n') {
      std::cout << "Ошибка ввода" << '\n' << "Введите ваш вариант (1 или 0) :";
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }
  }
  std::cout << "Задание выполнил Данильчк Матвей  453504  Вариант - 4\n";
}