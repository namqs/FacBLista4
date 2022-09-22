/*Faça um programa que leia um
número inteiro positivo N e exiba todos os
múltiplos de Y inferiores a N, onde N e Y são
fornecidos pelo usuário.

- pedir N e Y
- exibir multiplos de Y (porem, so ate atingir N)

*/

#include <stdio.h>
void main ()
{
  int N, Y, i;

    printf("Digite o valor de N e Y, respectivamente: ");
    scanf("%d %d", &N, &Y);

    for (i=0; i<N; i+=Y)
    {
      printf("%d ", i);
    }
}
