#include <iostream>

int main() {
  long double a, b, c;
  long long n;
  std::cout << "Введите переменные a b c (16 байт) : ";
  std::cin >> a >> b >> c;
  std::cout << "Введите вариант алгоритма : ";
  std::cin >> n;
  switch (n) {
  case 2:
    std::cout << b * c - a * a << '\n';
    break;
  case 56:
    std::cout << b * c << '\n';
    break;
  case 7:
    std::cout << a * a * a * a * a * a * a + c << '\n';
    break;
  case 3:
    std::cout << a - b * c << '\n';
    break;
  default:
    std::cout << (a + b) * (a + b) * (a + b) << '\n';
    break;
  }
  return 0;
}