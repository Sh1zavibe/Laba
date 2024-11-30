#include <cmath>
#include <iomanip>
#include <iostream>

bool povtor;

int main() {
  while (povtor == 0) {
    std::cout << "Алгоритм находит сумму n членов, где формула n члена : "
                 "2^(n-1) * (-1)^(n - 1) * a(n - 1).\n";
    std::cout << "Введите количество членов (n):\n";
    long long n;
    while (!(std::cin >> n) || std::cin.get() != '\n' || n <= 0) {
      std::cout << "Ошибка ввода" << '\n'
                << "Ещё раз введите количество членов :";
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }
    long long sum = 0;
    long long j = -1;
    for (long long i = 1; i <= n; i++) {
      std::cout << "Введите значение  " << i << " члена  : " << '\n';
      long long a;
      while (!(std::cin >> a) || std::cin.get() != '\n') {
        std::cout << "Ошибка ввода" << '\n'
                  << "Ещё раз введите значение первого члена :";
        std::cin.clear();
        while (std::cin.get() != '\n')
          ;
      }
      sum += j * pow(2, i) * a;
      j *= -1;
    }
    std::cout << "Сумма членов = " << sum << '\n';
    std::cout << "Для повтора программы введите 0\n";
    std::cout << "Для выхода из программы введите 1\n";
    while (!(std::cin >> povtor) || std::cin.get() != '\n') {
      std::cout << "Ошибка ввода" << '\n' << "Введите ваш вариант (1 или 0) :";
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }
  }
  std::cout << "Задание выполнил Данильчк Матвей  453504\n";
}