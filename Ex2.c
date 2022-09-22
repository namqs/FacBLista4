/*Faça um programa que exiba
todos os elementos da seguinte série, assim
como a soma destes elementos:
1, 50, 2, 49, 3, 48, 4, 47, 5, 46, ..., 49, 2, 50, 1

- for com 2 variaveis

*/

#include <stdio.h>
void main ()
{
  int i, j, soma;

    for (i=1, j=50; i<=50, j>=1; i++, j--)
    {
      printf("%d, %d, ", i, j);
    }
     soma= i+j;
      printf("a soma: %d \n", soma);
}
