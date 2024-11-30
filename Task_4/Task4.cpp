#include <cmath>
#include <iomanip>
#include <iostream>

bool povtor;
long double factorial(long double n) {
  long double sum = 1.0;
  while (n > 0) {
    sum *= n;
    n--;
  }
  return sum;
}

int main() {
  while (povtor == 0) {
    std::cout << "Дана функция Y(x) = cosx\n"
              << "Разложим :\n"
              << "S(x) = 1 + x * x / 2! + ... + (-1)^n * x^2n / (2n)!\n ";
    std::cout
        << "Будем находить сумму n членов и сравнивать со значением функции\n";
    std::cout
        << "Введите номер члена ряда (n), число должно быть натуральным : ";
    long long n;
    while (!(std::cin >> n) || std::cin.get() != '\n' || n <= 0) {
      std::cout << "Ошибка ввода" << '\n'
                << "Ещё раз введите номер члена ряда (n) " << ":";
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }
    std::cout << "Введите количество чисел для сравнения сначений функции и "
                 "ряда, вводимое чило должно быть натуральным :";
    unsigned long long k;
    while (!(std::cin >> k) || std::cin.get() != '\n') {
      std::cout << "Ошибка ввода" << '\n'
                << "Ещё раз введите количество чисел для сравнения сначений "
                   "функции и ряда :";
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }
    if (k > 0) {
      while (k > 0) {
        std::cout << "Введите х, x не больше 1 и не меньше 0.1 :\n";
        float x;
        while (!(std::cin >> x) || std::cin.get() != '\n' || x >= 1 ||
               x <= 0.1) {
          std::cout << "Ошибка ввода" << '\n' << "ещё раз введите х :";
          std::cin.clear();
          while (std::cin.get() != '\n')
            ;
        }
        std::cout << "х = " << x << '\n';
        std::cout << "Значение функции Y(x) = " << cos(x);
        long double s = 1.0;
        if (n > 50)
          n = 50;
        for (long double i = 1.0; i <= n; i++) {
          long double dwa = i * 2;
          s = s + pow(-1, i) * pow(x, dwa) / factorial(dwa);
        }
        std::cout << "  Значение ряда S(x) = " << s << '\n';
        k--;
      }
    } else {
      std::cout
          << "Введенное значение неккоректно, прекращение работы программы!"
          << '\n';
    }
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
