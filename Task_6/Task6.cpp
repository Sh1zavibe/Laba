#include <cmath>
#include <iostream>
#include <math.h>

long double factorial(long double x) // Функция для нахождения факториала
{
  long double fac = 1;
  for (int i = 1; i <= x; ++i) {
    fac *= i;
  }
  return fac;
}

long double ln(long double x) // Функция для нахождения лагорифма
{
  if (x >= 2) {
    return ln(x / 2.0) + 0.6931;
  }
  x = x - 1;
  long double total = 0.0;
  long double x_to_pow = x;
  for (int i = 1; i < 100; ++i) {
    if (i % 2 == 1) {
      total += x_to_pow / (i);
    } else {
      total -= x_to_pow / (i);
    }

    x_to_pow *= x;
  }
  return total;
}

int main() {
  bool pov = 0;
  while (pov == 0) {
    std::cout << "Программа выводит наименьшее значение из cos(x), sin(x), "
                 "ln|x|, зависящее от х."
              << '\n';
    std::cout << "Введите x" << '\n';
    long double x;
    while (!(std::cin >> x) or std::cin.get() != '\n') {
      std::cout << "Ошибка ввода" << '\n' << "Ещё раз введите x" << ":" << '\n';
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }
    if (x == 0) {
      std::cout << "sinx = 0";
      std::cout << "cosx = 0"; // При х = 0
      std::cout << "Значения ln|x| от нуля не существует";
    } else {
      if (x > 0) {
        const long double twopi = acos(-1) * 2;
        long double xx = x;
        int musor;

        if (x > twopi) {
          x = remquol(x, twopi, &musor);
          std::cout << "Синус больше 2 пи, применив формулу привидения : x = "
                    << x << '\n'; // Формула привидения
        }

        long double rsin = 0; // Рассчет синуса
        for (int i = 0; i <= 150; ++i)
          rsin += powl(-1, i) * powl(x, 2 * i + 1) / factorial(2 * i + 1);
        long double rcos = 1; // Рассчет косинуса
        for (int i = 1; i <= 150; ++i)
          rcos += powl(-1, i) * powl(x, 2 * i) / factorial(2 * i);
        long double log_n = ln(fabs(xx)); // Рассчет лагорифма

        std::cout << "Значение синуса через cmath = " << sin(x) << '\n';
        std::cout << "Значение синуса через ряд = " << rsin << '\n';
        std::cout << "Значение косинуса через cmath = " << cos(x) << '\n';
        std::cout << "Значение косинуса через ряд = " << rcos << '\n';
        std::cout << "Значение натурального логарифма через cmath = "
                  << log(fabs(xx)) << '\n'; // Вывод значений
        std::cout << "Значение натурального логарифма ряд = " << log_n << '\n';
        if (rsin > log_n && rcos > log_n)
          std::cout << "Минимальное значение из трех функций: " << log_n
                    << '\n';
        if (log_n > rcos && rsin > rcos)
          std::cout << "Минимальное значение из трех функций: " << rsin << '\n';
        if (rsin > rcos && rcos > log_n)
          std::cout << "Минимальное значение из трех функций: " << rcos << '\n';
      } else {
        const long double twopi = acos(-1) * 2;
        long double xx = fabs(x);
        int musor;

        if (fabs(x) > twopi) {
          x = -remquol(fabs(x), twopi, &musor);
          std::cout << "Синус больше 2 пи, применив формулу привидения : x = "
                    << x << '\n'; // Формула привидения
        }

        long double rsin = 0;
        for (int i = 0; i <= 150; ++i) // Рассчет синуса
          rsin += powl(-1, i) * powl(x, 2 * i + 1) / factorial((2 * i + 1));
        long double rcos = 1;
        for (int i = 1; i <= 150; ++i) // Рассчет косинуса
          rcos += powl(-1, i) * powl(-x, 2 * i) / factorial(2 * i);
        long double log_n = ln(fabs(xx)); // Рассчет логарифма

        std::cout << "Значение синуса через cmath = " << sin(x) << '\n';
        std::cout << "Значение синуса через ряд = " << rsin << '\n';
        std::cout << "Значение косинуса через cmath = " << cos(x) << '\n';
        std::cout << "Значение косинуса через ряд = " << rcos << '\n';
        std::cout << "Значение натурального логарифма через cmath = "
                  << log(fabs(xx)) << '\n'; // Вывод значений
        std::cout << "Значение натурального логарифма ряд = " << log_n << '\n';
        if (rsin > log_n && rcos > log_n)
          std::cout << "Минимальное значение из трех функций: " << log_n
                    << '\n';
        if (log_n > rcos && rsin > rcos)
          std::cout << "Минимальное значение из трех функций: " << rsin << '\n';
        if (rsin > rcos && rcos > log_n)
          std::cout << "Минимальное значение из трех функций: " << rcos << '\n';
      }
      std::cout << "Для повтора программы введите 0\n";
      std::cout << "Для выхода из программы введите 1\n";
      while (!(std::cin >> pov) || std::cin.get() != '\n') {
        std::cout << "Ошибка ввода" << '\n'
                  << "Введите ваш вариант (1 или 0) :";
        std::cin.clear();
        while (std::cin.get() != '\n')
          ;
      }
    }
  }
  return 0;
}