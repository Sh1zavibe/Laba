#include <stdio.h>
#include <stdlib.h>

int povtor;
int main() {
  while (povtor == 0) {
    printf(
        "Дан трёхмерный динамический массив размером n^3 целых неотрицательных "
        "чисел. Необходимо определить диагональ с наибольшей суммой чисел.\n");
    int n;
    printf("Введите n (натуральное) : ");
    while (!(scanf("%d", &n)) || n <= 0) {
      printf("Ошибка ввода\nВведите ваше n (натуральное) ещё раз : ");
      fflush(stdin);
      while (getchar() != '\n')
        ;
    }
    int ***a = (int ***)malloc(n * sizeof(int **));
    for (int i = 0; i < n; i++) {
      a[i] = (int **)malloc(n * sizeof(int *));
      for (int j = 0; j < n; j++) {
        a[i][j] = (int *)malloc(n * sizeof(int));
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
          printf("Введите элемент [%d][%d][%d] (целое число) : ", i, j, k);
          while (!(scanf("%d", &a[i][j][k])) || getchar() != '\n' || a[i][j][k] < 0) {
            printf("Ошибка ввода\nВведите ваше ваш [%d][%d][%d] член (целое "
                   "число) ещё раз : ",
                   i, j, k);
            fflush(stdin);
            while (getchar() != '\n')
              ;
          }
        }
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        for (int k = 0; k < n; k++) {
          printf("%d", a[i][j][k]);
          printf(" ");
        }
        printf("\n");
      }
      printf("\n");
    }
    long long sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    for (int i = 0; i < n; i++) {
      sum1 += a[i][i][i];
      sum2 += a[i][i][n - i - 1];
      sum3 += a[i][n - 1 - i][i];
      sum4 += a[n - 1 - i][i][i];
    }
    if (sum1 >= sum2 && sum1 >= sum3 && sum1 >= sum4)
      printf("Наибольшая диагональ равна : %d\n", sum1);
    else {
      if (sum2 >= sum1 && sum2 >= sum3 && sum2 >= sum4)
        printf("Наибольшая диагональ равна : %d\n", sum1);
      else {
        if (sum3 >= sum2 && sum3 >= sum1 && sum3 >= sum4)
          printf("Наибольшая диагональ равна : %d\n", sum3);
        else
          printf("Наибольшая диагональ равна : %d\n", sum4);
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        free(a[i][j]);
      }
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