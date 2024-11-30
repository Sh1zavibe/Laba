#include <iostream>

bool povtor, minn;
int main() {
  while (povtor == 0) {
    std::cout << "Программа предназначена для проверки, является ли введенный "
                 "массив убывающим.\n";
    std::cout << "Введите k (количество элементов в массиве, число должно быть "
                 "натуральным) :";
    long long k;
    while (!(std::cin >> k) || std::cin.get() != '\n') {
      std::cout << "Ошибка ввода" << '\n' << "Ещё раз введите k :";
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }
    if (k >= 1) {
      long double a[k];
      std::cout << "Введите 1 элемент :";
      while (!(std::cin >> a[0]) || std::cin.get() != '\n') {
        std::cout << "Ошибка ввода" << '\n'
                  << "Ещё раз введите член массива (действительное число) :";
        std::cin.clear();
        while (std::cin.get() != '\n')
          ;
      }
      for (int i = 1; i < k; i++) {
        std::cout << "Введите " << i + 1 << " элемент :";
        while (!(std::cin >> a[i]) || std::cin.get() != '\n') {
          std::cout << "Ошибка ввода" << '\n'
                    << "Ещё раз введите член массива (действительное число) :";
          std::cin.clear();
          while (std::cin.get() != '\n')
            ;
        }
        if (a[i] >= a[i - 1])
          minn = 1;
      }
      for (int i = 0; i < k; i++)
        std::cout << a[i] << " ";
      std::cout << '\n';
      if (minn == 1)
        std::cout << "Массив не убывающий" << '\n';
      else
        std::cout << "Массив убывающий" << '\n';
    } else {
      std::cout << "Ошибка! Введенное значение не является натуральным, "
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