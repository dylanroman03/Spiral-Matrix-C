#include <stdio.h>
#include <stdlib.h>

void caracolMatrix(int n, int corner)
{
  int matrix[n * n];
  int steps[4] = {1, n, -1, -n};
  int e = 0;
  int x = 1;
  int y = 0;

  switch (corner)
  {
  case 2:
    e = n - 1;
    y = 1;
    break;
  case 3:
    e = (n * n) - 1;
    y = 2;
    break;
  case 4:
    e = (n * n) - n;
    y = 3;
    break;
  }

  int step = steps[y];

  for (int i = 0; i < n * n; i++)
  {
    matrix[i] = 0;
  }

  // matrix[corner] = 1;

  for (int i = 1; i <= n * n; i++)
  {
    matrix[e] = i;
    if (matrix[e + step] == 0 && x < n)
    {
      e = e + step;
      x++;
    }
    else
    {
      if (y + 1 > 3)
      {
        y = 0;
      }
      else
      {
        y = y + 1;
      }

      step = steps[y];

      e = e + step;
      x = 2;
    }
  }

  printf("\n");

  for (int i = 0; i < n * n; i++)
  {
    printf("%d\t", matrix[i]);
    if ((i + 1) % n == 0)
    {
      printf("\n");
    }
  }
}

int main()
{
  system("cls");
  int n;
  printf("Enter size of the matrix: \t");
  scanf("%d", &n);
  system("cls");
  caracolMatrix(n, 4);
}