/*Joãozinho investiu Q reais em
uma aplicação com rendimento fixo de R% ao
mês. Pede-se a implementação de um
programa que calcule o valor (e exiba-o)
disponível na conta de Joãozinho após A anos
de investimento.

- solicitar o total investido, o tanto de rendimento, anos de investimento*/
#include <stdio.h>
void main ()
{
    float valor, rendimentoM, rendimentoA;
    int anos, i, total;

        printf("Quantos reais voce investiu? R$ ");
        scanf("%f", &valor);
        printf("Ok, e quanto eh o rendimento fixo mensal? R$ ");
        scanf("%f", &rendimentoM);
        printf("Voce quer conferir qual sera o valor daqui a quantos anos?");
        scanf("%d", &anos);

        rendimentoA = rendimentoM*12;

        total=valor+(rendimentoA*anos);

            printf("Valor total disponivel em sua conta após %d anos sera: %d.", anos, total);

}
