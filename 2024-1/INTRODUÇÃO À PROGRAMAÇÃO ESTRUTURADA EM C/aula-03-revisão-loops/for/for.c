/*

Professor: Eliton Marcos Vela

Aluno: Antônio Roberto Júnior

Problemática: Desenvolva um programa que
leia um número e o mostre 20 vezes.

*/

#include <stdio.h>

int main(void)
{
    int num;

    /* Solicita entrada ao usuário */
    printf("Digite um número: ");
    scanf("%d", &num);

    /* Exibe o número 20 vezes */
    for (int i = 0; i <= 20; i++)
    {
        printf("%d\n", num);
    }

    return 0;
}