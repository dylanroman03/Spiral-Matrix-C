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

  for (int i = 0; i < n * n; i++)
  {
    printf("%d\t", matrix[i]);
    if ((i + 1) % n == 0)
    {
      printf("\n");
    }
  }
}

int checkRange(int n, int a)
{
  if (n <= 3 || n >= 15 || a <= 0 || a >= 5)
  {
    return 0;
  }
  else
  {
    return 1;
  }
}

int main()
{
  int size;

  printf("Enter the quantity of the matrix:\t");
  scanf("%d", &size);

  int matrix[size];
  int nMatrix[size];
  int cornerMatrix[size];

  for (int i = 0; i < size; i++)
  {
    int n = 0;
    int corner = 0;

    printf("Ingresa el rango de la matrix y la esquinas (separada por espacios)");
    printf("\nEl rango para la matrix es 3 < x < 15 e impar y el de las esquinas 0 < x < 5\n");

    while (checkRange(n, corner) == 0 || n % 2 == 0)
    {
      scanf("%d %d", &n, &corner);
      if (checkRange(n, corner) == 0 || n % 2 == 0)
      {
        printf("Ingrese Valores Correctos\n");
      }
    }

    printf("\nValores agregados\n");
    nMatrix[i] = n;
    cornerMatrix[i] = corner;
  }

  for (int i = 0; i < size; i++)
  {
    caracolMatrix(nMatrix[i], cornerMatrix[i]);
    printf("\n\n\n");
  }
}