#include <cmath>
#include <iostream>

bool povtor;
long long x;
long long digits[1000][10];

void gayArmstrong(long long x) {
  for (int i = 1; i <= x; i++) {
    long long j = i;
    long long k = log10(i);
    long long sum = 0;
    k++;
    while (j != 0) {
      sum += digits[k][(j % 10)];
      j /= 10;
    }
    if (sum == i) {
      std::cout << i << std::endl;
    }
  }
}

int main() {
  for (int j = 1; j <= 9; j++) {
    for (int i = 1; i < 1000; i++) {
      digits[i][j] = pow(j, i);
    }
  }
  while (povtor == 0) {
    std::cout << "Данный алгоритм предназначен для нахождения всех чисел "
                 "Армстронга меньше чем введённое пользователем число\n";
    std::cout << "Введите до какого числа х ищем числа Армстронга: ";
    while (!(std::cin >> x) || std::cin.get() != '\n') {
      std::cout << "Ошибка ввода" << '\n' << "Ещё раз введите х :";
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }
    gayArmstrong(x);
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
  return 0;
}