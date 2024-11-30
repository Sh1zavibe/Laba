#include <cmath>
#include <iostream>

int main() {
  std::cout << "Введите шесть переменных (16 байт) ";
  long double x, z, p, D, C, K, A, B;
  std::cin >> x >> p >> z >> K >> C >> D;
  A = sin(x) - z;
  B = fabs(p - x);
  if (C * D != 0)
    std::cout << pow(A + B, 2) - K / C / D;
  else
    std::cout << "Error";
  return 0;
}