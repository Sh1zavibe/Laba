#include <algorithm>
#include <iostream>

bool povtor;
int main() {
  while (povtor == 0) {
    std::cout
        << "Программа предназначена для сортировки строк массива n*m по "
           "возврастанию, строка считается большей, если её максимум больше.\n";
    std::cout << "Введите n и m(размерность массива, числа должны быть "
                 "натуральными) :";
    long long n, m;
    while (!(std::cin >> n >> m) || std::cin.get() != '\n') {
      std::cout << "Ошибка ввода" << '\n' << "Ещё раз введите n и m:";
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }

    long double *maxx = new long double[n];
    long long *num = new long long[n];
    long double **a = new long double *[n];
    long double maxxx;
    for (long long i = 0; i < m; ++i)
      a[i] = new long double[m];
    for (long long i = 0; i < n; i++) {
      for (long long j = 0; j < m; j++) {
        std::cout << "Введите [" << i << "][" << j
                  << "] член массива (действительное число) :";
        while (!(std::cin >> a[i][j]) || std::cin.get() != '\n') {
          std::cout << "Ошибка ввода" << '\n' << "Ещё раз введите член массива";
          std::cin.clear();
          while (std::cin.get() != '\n')
            ;
        }
        if (j == 0)
          maxxx = a[i][j];
        else {
          if (a[i][j] > maxxx)
            maxxx = a[i][j];
        }
        // std::cout << a[i][j] << " ";
      }
      maxx[i] = maxxx;
      num[i] = i;
      // std::cout << '\n';
    }
    for (long long i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        std::cout << a[i][j] << " ";
      }
      std::cout << '\n';
    }
    std::cout << '\n';
    for (long long i = 0; i < n - 1; i++) {
      for (long long j = i + 1; j < n; j++)
        if (maxx[j] > maxx[i]) {
          long double swap = maxx[i];
          maxx[i] = maxx[j];
          maxx[j] = swap;
          long long sn = num[i];
          num[i] = num[j];
          num[j] = sn;
        }
    }
    for (long long i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        std::cout << a[num[i]][j] << " ";
      }
      std::cout << '\n';
    }
    for (int i = 0; i < n; i++)
      delete[] a[i];
    delete[] a;
    std::cout << "Для повтора программы введите 0\n";
    std::cout << "Для выхода из программы введите 1\n";
    while (!(std::cin >> povtor) || std::cin.get() != '\n') {
      std::cout << "Ошибка ввода" << '\n' << "Введите ваш вариант (1 или 0) :";
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }
    std::cout << "Задание выполнил Данильчк Матвей  453504  Вариант - 4\n";
  }
}