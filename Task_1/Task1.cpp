#include <iostream>

int main() {
  std::cout << "Найдём сумму : N = ∑(1 -30)  (ai - bi)^2" << '\n';
  long long i = 1, a, b, N = 0;
  while (i <= 30) {
    if (i % 2 == 0) {
      a = i / 2;
      b = i * i * i;
    } else {
      a = i;
      b = i * i;
    }
    N += (a - b) * (a - b);
    i++;
  }
  std::cout << "Сумма равна : " << N << '\n';
  std::cout << "Задание выполнил Данильчк Матвей 453504\n";
}