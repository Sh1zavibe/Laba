#include <stdio.h>
#include <iostream> 
#include <limits>
#include "library.h"
#include<gtest/gtest.h>
const int maxl = 80; 
 
int main() { 
  setlocale(LC_ALL, "Russian"); 
  std::cout 
      << "Программу выполнил Данильчук Матвей 453504 Варианты заданий : 4\n"; 
  std::cout << "Task 1\nПрограмме подается строка состоящая (не больше 80 " 
               "символов) из групп единиц и нулей\n"; 
  std::cout << "Алгоритм выведет группы с четным количеством символов.\n"; 
  while (1) { 
    char s[maxl + 2]; 
    std::cout << "Введите строку : "; 
    bool correct_input = 0, proverka = 0; 
    int i = 1; 
    while (proverka == 0) { 
      if (i <= maxl) { 
        char c = getchar(); 
        if (c == '\n') { 
          if (correct_input == 1 || i == 0) { 
            std::cout << "Ошибка ввода, введите строку ещё раз : "; 
            i = 1; 
            correct_input = 0; 
          } else { 
            proverka = 1; 
            s[i] = '\0'; 
          } 
        } else { 
          if (correct_input == 0) { 
            if (c != '0' && c != '1') { 
              correct_input = 1; 
            } 
          } 
          s[i] = c; 
          ++i; 
        } 
      } else { 
        std::cout << "Превышен лимит символов, введите строку ещё раз : "; 
        i = 1;
        while (getchar() != '\n') 
          ; 
      } 
    } 
    // std::cout << i << '\n'; 
    Searcheven(s, i); 
    std::cout << "Для повтора программы введите 1\n"; 
    std::cout << "Для перехода к следующей программе введите 0\n"; 
    bool povtor; 
    while (!(std::cin >> povtor) || std::cin.get() != '\n') { 
      std::cout << "Ошибка ввода" << '\n' 
                << "Введите 1 для повтора 0 для выхода:\n"; 
      std::cin.clear(); 
      while (std::cin.get() != '\n') 
        ; 
    } 
    if (povtor == 0) 
      break; 
    else 
      continue; 
  } 
 
  std::cout << "Task 2\nПосле указанного символа будет вставлена подстрока.\n"; 
  std::cout << "Программе подаётся исходная строка, символ, после которого " 
               "будет вставлена подстрока и сама подстрока\n"; 
  while (1) { 
    char s[maxl + 2]; 
    char ss[maxl + 2]; 
    std::cout << "Введите исходную строку (не более 80 символов) : "; 
    bool proverka = 0, correct_input = 0; 
    int l1 = 1; 
    while (proverka == 0) { 
      if (l1 <= maxl) { 
        char c = getchar(); 
        if (c == '\n') { 
          proverka = 1; 
          s[l1] = '\0'; 
        } 
        s[l1] = c; 
        ++l1; 
      } else { 
        std::cout << "Превышен лимит символов, введите строку ещё раз : "; 
        l1 = 1; 
        while (getchar() != '\n') 
          ; 
      } 
    } 
    proverka = 0; 
    int l2 = 1; 
    std::cout << "Введите подстроку : "; 
    while (proverka == 0) { 
      if (l2 <= maxl) { 
        char c = getchar(); 
        if (c == '\n') { 
          proverka = 1; 
          ss[l2] = '\0'; 
        } 
        ss[l2] = c; 
        ++l2; 
      } else { 
        std::cout << "Превышен лимит символов, введите строку ещё раз : "; 
        l2 = 1; 
        while (getchar() != '\n') 
          ; 
      } 
    } 
    std::cout << "Введите символ после которого будет вставлена подстрока :"; 
    char checkpoint = getchar(); 
    SearchandImport(s, ss, checkpoint, l1, l2); 
    std::cout << "Для повтора программы введите 1\n"; 
    std::cout << "Длявыхода из программы введите 0\n"; 
    bool povtor; 
    while (!(std::cin >> povtor) || std::cin.get() != '\n') { 
      std::cout << "Ошибка ввода" << '\n' 
                << "Введите 1 для повтора 0 для выхода:\n"; 
      std::cin.clear(); 
      while (std::cin.get() != '\n') 
        ; 
    } 
    if (povtor == 0) 
      break; 
    else 
      continue; 
  } 
  std::cout << "Task 3\nПрограмме подаётся массив строк, выводом будет " 
               "развернутый массив\n"; 
  while (1) { 
    std::cout << "Введите n - количество строк : "; 
    int n; 
    while (true) { 
      if (std::cin >> n && n > 0) { 
        break; 
      } 
      std::cout << "Ошибка ввода\nВведите n ещё раз (натуральноечисло): ";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    char** str = new char*[n];
    for (int i = 0; i < n; ++i) str[i] = new char[maxl + 1];
    int* a = new int[n];
    for (int i = 0; i < n; ++i) a[i] = 0;
    for (int i = 0; i < n; ++i) {
      std::cout << "Введите " << i + 1 << " строку : ";
      bool proverka = 0;
      while (proverka == 0) {
        if (a[i] < maxl) {
          char c = getchar();
          if (c == '\n') {
            str[i][a[i]] = '\0';
            proverka = 1;
          }
          str[i][a[i]] = c;
          ++a[i];
        } else {
          std::cout << "Превышен лимит символов, введите строку ещё раз : ";
          a[i] = 0;
          while (getchar() != '\n')
            ;
        }
      }
    }
    PrintReverseArray(str, a, n);
    for (int i = 0; i < n; ++i) {
      delete[] str[i];
      str[i] = nullptr;
    }
    delete[] str;
    str = nullptr;
    std::cout << "Для повтора программы введите 1\n";
    std::cout << "Для выхода из программы введите 0\n";
    bool povtor;
    while (!(std::cin >> povtor) || std::cin.get() != '\n') {
      std::cout << "Ошибка ввода" << '\n'
                << "Введите 1 для повтора 0 для выхода:\n";
      std::cin.clear();
      while (std::cin.get() != '\n')
        ;
    }
    if (povtor == 0)
      break;
    else
      continue;
  }
}