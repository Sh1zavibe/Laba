#include <stdio.h>
#include <stdlib.h>

int **DelFourSquare(int n) {
  int **matrix = (int **)malloc(n * sizeof(int *));
  for (int i = 0; i < n; i++)
    matrix[i] = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      matrix[i][j] = (n * i) + j + 1;

  for (int i = 0; i < n / 4; i++)
    for (int j = 0; j < n / 4; j++)
      matrix[i][j] = (n * n + 1) - matrix[i][j];

  for (int i = 0; i < n / 4; i++)
    for (int j = 3 * (n / 4); j < n; j++)
      matrix[i][j] = (n * n + 1) - matrix[i][j];

  for (int i = 3 * n / 4; i < n; i++)
    for (int j = 0; j < n / 4; j++)
      matrix[i][j] = (n * n + 1) - matrix[i][j];

  for (int i = 3 * n / 4; i < n; i++)
    for (int j = 3 * n / 4; j < n; j++)
      matrix[i][j] = (n * n + 1) - matrix[i][j];

  for (int i = n / 4; i < 3 * n / 4; i++)
    for (int j = n / 4; j < 3 * n / 4; j++)
      matrix[i][j] = (n * n + 1) - matrix[i][j];

  return matrix;
}

int **DelOneSquare(int n) {
  if (n < 3 || n % 2 == 0)
    return NULL;

  int value = 0;
  int squareSize = n * n;
  int c = n / 2, r = 0, i;

  int **result = (int **)malloc(n * sizeof(int *));

  for (i = 0; i < n; i++)
    result[i] = (int *)malloc(n * sizeof(int));

  while (++value <= squareSize) {
    result[r][c] = value;
    if (r == 0) {
      if (c == n - 1)
        r++;
      else {
        r = n - 1;
        c++;
      }
    } else if (c == n - 1) {
      r--;
      c = 0;
    } else if (result[r - 1][c + 1] == 0) {
      r--;
      c++;
    } else
      r++;
  }
  return result;
}

int **DelTwoSquare(int n) {
  if (n < 6 || (n - 2) % 4 != 0)
    return NULL;

  int size = n * n;
  int halfN = n / 2;
  int subGridSize = size / 4, i;

  int **subGrid = DelOneSquare(halfN);
  int gridFactors[] = {0, 2, 3, 1};
  int **result = (int **)malloc(n * sizeof(int *));

  for (i = 0; i < n; i++)
    result[i] = (int *)malloc(n * sizeof(int));

  for (int r = 0; r < n; r++)
    for (int c = 0; c < n; c++) {
      int grid = (r / halfN) * 2 + (c / halfN);
      result[r][c] = subGrid[r % halfN][c % halfN];
      result[r][c] += gridFactors[grid] * subGridSize;
    }

  int nColsLeft = halfN / 2;
  int nColsRight = nColsLeft - 1;

  for (int r = 0; r < halfN; r++)
    for (int c = 0; c < n; c++)
      if (c < nColsLeft || c >= n - nColsRight ||
          (c == nColsLeft && r == nColsLeft)) {

        if (c == 0 && r == nColsLeft)
          continue;

        int tmp = result[r][c];
        result[r][c] = result[r + halfN][c];
        result[r + halfN][c] = tmp;
      }

  return result;
}

void PrintSquare(int **matrix, int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      printf("%d ", matrix[i][j]);
    printf("\n");
  }
}

int povtor;

int main() {
  while (povtor == 0) {
    printf("Алгоритм предназначен для выведение магического квадрата со "
           "стороной n\n ");

    int n;

    printf("Введите n (натуральное) : ");
    while (!(scanf("%d", &n)) || getchar() != '\n' || n <= 0) {
      printf("Ошибка ввода\nВведите ваше n (натуральное) ещё раз : ");
      fflush(stdin);
      while (getchar() != '\n')
        ;
    }
    if (n == 1)
      printf("1\n");
    else {
      if (n == 2)
        printf("NULL\n");
      else {
        if (n % 4 == 0)
          PrintSquare(DelFourSquare(n), n);
        else if (n % 2 == 0)
          PrintSquare(DelTwoSquare(n), n);
        else
          PrintSquare(DelOneSquare(n), n);
      }
    }
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
  return 0;
}  