#include <cmath>
#include <iostream>

int main() {
  double sum = 0.0, eps = 1.0 / 1000.0, dn, n = 1;
  std::cout << "Используя цикл do while найдём сумму ряда с точностью ε = "
               "10^-3, общийчлен которого dn =1/2^n +1/3^n."
            << '\n'
            << '\n';
  do {
    dn = 1.0 / pow(2, n) + 1.0 / pow(3, n);
    sum += dn;
    n++;
  } while (dn >= eps);
  std::cout << "Сумма ряда с точностью ε = 10^-3 равна : " << sum << '\n';
  std::cout << "Задание выполнил Данильчк Матвей 453504\n";
}