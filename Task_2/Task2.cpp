#include <iostream>

bool povtor, kor;
int main() {
  while (povtor == 0) {
    std::cout
        << "Программа предназначена для произведения положительных элементов "
           "рассположенных ниже главной диагонали двумерного массива n*n.\n";
    std::cout
        << "Введите n (размерность массива, число должно быть натуральным) :";
    long long n;
    while (!(std::cin >> n) || std::cin.get() != '\n') {
      std::cout << "Ошибка ввода" << '\n' << "Ещё раз введите n:";
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }
    if (n >= 1) {
      long double a[n][n];
      for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
          std::cout << "Введите элемент [" << i << "][" << j << "] : ";
          while (!(std::cin >> a[i][j]) || std::cin.get() != '\n') {
            std::cout << "Ошибка ввода" << '\n' << "Ещё раз введите a[n][n]:";
            std::cin.clear();
            while (std::cin.get() != '\n')
              ;
          }
        }
      long double pr = 1;
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          if (i == j)
            break;
          else {
            if (a[i][j] > 0) {
              pr *= a[i][j];
              kor = 1;
            }
          }
        }
      }
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
          std::cout << a[i][j] << " ";
        }
        std::cout << '\n';
      }
      if (pr >= 1 && kor == 1)
        std::cout << "Произведение равно : " << pr << '\n';
      else
        std::cout << "Ниже главной матрицы нет положительных элементов" << '\n';
    } else {
      std::cout << "Ошибка! Введенное значение не является натуральными, "
                   "перкращенние работы программы\n";
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