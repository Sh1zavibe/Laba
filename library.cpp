#include "library.h"

#include <iostream>
void Searcheven(char* c, int length) {
  bool minreturn = 0;
  char compair = c[1];
  int start = 1;
  for (int i = 2; i <= length; ++i) {
    if (i != length) {
      if (c[i] != compair) {
        compair = c[i];
        if ((i - start) % 2 == 0) {
          minreturn = 1;
          for (int j = start; j < i; ++j) {
            std::cout << c[j];
          }
          std::cout << " ";
          start = i;
        } else {
          start = i;
        }
      }
    } else {
      if (c[i] != compair) {
        if ((i - start) % 2 == 0) {
          minreturn = 1;
          for (int j = start; j < i; ++j) std::cout << c[j];
        }
      } else {
        if ((i - start + 1) % 2 == 0) {
          minreturn = 1;
          for (int j = start; j <= i; ++j) std::cout << c[j];
        }
      }
    }
  }
  if (minreturn == 0)
    std::cout << "Групп с четным количеством символов не обнаружено\n";
  else
    std::cout << '\n';
}
void SearchandImport(char* s, char* ss,const char c, int length1, int length2) {
  for (int i = 1; i < length1 - 1; ++i) {
    std::cout << s[i];
    if (s[i] == c) {
      for (int j = 1; j < length2 - 1; ++j) {
        std::cout << ss[j];
      }
    }
  }
  std::cout << '\n';
}
void PrintReverseArray(char** str, int* a, int n) {
  for (int i = n - 1; i >= 0; --i) {
    for (int j = a[i] - 2; j >= 0; --j) {
      std::cout << str[i][j];
    }
    std::cout << '\n';
  }
}