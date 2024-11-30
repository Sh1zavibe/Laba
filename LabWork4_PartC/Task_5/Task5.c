#include <stdio.h>
#include <stdlib.h>

int povtor;
int main() {
  while (povtor == 0) {
    printf("На вход подаётся поле для игры в сапёр размером n*m символов, где "
           "символ '.' означает пустое место, а символ '*' - бомбу.\n");
    printf("Алгоритм заменит точки на цифры в соответствии с правилами игры\n");
    int n, m;
    printf("Введите n и m (натуральные) : ");
    while (!(scanf("%d%d", &n, &m)) || getchar() != '\n' || n <= 0 || m <= 0) {
      printf("Ошибка ввода\nВведите ваше n и m (натуральные) ещё раз : ");
      fflush(stdin);
      while (getchar() != '\n')
        ;
    }
    char **a = (char **)malloc(n * sizeof(char *));
    for (int i = 0; i < n; i++) {
      a[i] = (char *)malloc(m * sizeof(char));
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        printf("Введите символ для ячейки [%d][%d] (введите '.' если мины нет, "
               "'*' если есть): ",
               i, j);
        while (1) {
          char input = getchar();
          if (input == '.' || input == '*') {
            a[i][j] = input;
            break;
          } else {
            printf("Ошибка ввода. Пожалуйста, введите '.' или '*': ");
          }
          while (getchar() != '\n')
            ;
        }
        while (getchar() != '\n')
          ;
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        printf("%c ", a[i][j]);
      }
      printf("\n");
    }
    printf("\n\n");
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (a[i][j] != '*') {
          a[i][j] -= 46;
          if (i == 0 && j == 0) {
            if (a[i + 1][j + 1] == '*')
              a[i][j]++;
            if (a[i][j + 1] == '*')
              a[i][j]++;
            if (a[i + 1][j] == '*')
              a[i][j]++;
            printf("%d ", a[i][j]);
          } else {
            if (i == n - 1 && j == m - 1) {
              if (a[i - 1][j - 1] == '*')
                a[i][j]++;
              if (a[i][j - 1] == '*')
                a[i][j]++;
              if (a[i - 1][j] == '*')
                a[i][j]++;
              printf("%d ", a[i][j]);
            } else {
              if (i == 0 && j == m - 1) {
                if (a[i][j - 1] == '*')
                  a[i][j]++;
                if (a[i + 1][j] == '*')
                  a[i][j]++;
                if (a[i + 1][j - 1] == '*')
                  a[i][j]++;
                printf("%d ", a[i][j]);
              } else {
                if (i == n - 1 && j == 0) {
                  if (a[i][j + 1] == '*')
                    a[i][j]++;
                  if (a[i - 1][j] == '*')
                    a[i][j]++;
                  if (a[i - 1][j + 1] == '*')
                    a[i][j]++;
                  printf("%d ", a[i][j]);
                } else {
                  if (i == 0) {
                    if (a[i][j + 1] == '*')
                      a[i][j]++;
                    if (a[i][j - 1] == '*')
                      a[i][j]++;
                    if (a[i + 1][j] == '*')
                      a[i][j]++;
                    if (a[i + 1][j + 1] == '*')
                      a[i][j]++;
                    if (a[i + 1][j - 1] == '*')
                      a[i][j]++;
                    printf("%d ", a[i][j]);
                  } else {
                    if (j == 0) {
                      if (a[i][j + 1] == '*')
                        a[i][j]++;
                      if (a[i - 1][j] == '*')
                        a[i][j]++;
                      if (a[i + 1][j] == '*')
                        a[i][j]++;
                      if (a[i + 1][j + 1] == '*')
                        a[i][j]++;
                      if (a[i - 1][j + 1] == '*')
                        a[i][j]++;
                      printf("%d ", a[i][j]);
                    } else {
                      if (i == n - 1) {
                        if (a[i][j + 1] == '*')
                          a[i][j]++;
                        if (a[i - 1][j] == '*')
                          a[i][j]++;
                        if (a[i][j - 1] == '*')
                          a[i][j]++;
                        if (a[i - 1][j - 1] == '*')
                          a[i][j]++;
                        if (a[i - 1][j + 1] == '*')
                          a[i][j]++;
                        printf("%d ", a[i][j]);
                      } else {
                        if (j == m - 1) {
                          if (a[i + 1][j] == '*')
                            a[i][j]++;
                          if (a[i - 1][j] == '*')
                            a[i][j]++;
                          if (a[i][j - 1] == '*')
                            a[i][j]++;
                          if (a[i + 1][j - 1] == '*')
                            a[i][j]++;
                          if (a[i - 1][j - 1] == '*')
                            a[i][j]++;
                          printf("%d ", a[i][j]);
                        } else {
                          if (a[i][j + 1] == '*')
                            a[i][j]++;
                          if (a[i][j - 1] == '*')
                            a[i][j]++;
                          if (a[i + 1][j] == '*')
                            a[i][j]++;
                          if (a[i - 1][j] == '*')
                            a[i][j]++;
                          if (a[i + 1][j + 1] == '*')
                            a[i][j]++;
                          if (a[i - 1][j - 1] == '*')
                            a[i][j]++;
                          if (a[i + 1][j - 1] == '*')
                            a[i][j]++;
                          if (a[i - 1][j + 1] == '*')
                            a[i][j]++;
                          printf("%d ", a[i][j]);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        } else
          printf("%c ", a[i][j]);
      }
      printf("\n");
    }
    for (int i = 0; i < n; i++) {
      free(a[i]);
    }
    free(a);
    printf("Для повтора программы введите 0\n");
    printf("Для выхода из программы введите 1\n");
    while (!(scanf("%d", &povtor)) || getchar() != '\n' ||
           (povtor != 1 && povtor != 0)) {
      printf("Ошибка ввода\nВведите ваш вариант (1 или 0): ");
      fflush(stdin);
      while (getchar() != '\n')
        ;
    }
  }
  printf("Программу выполнил Данильчук Матвей 453504\n");
}