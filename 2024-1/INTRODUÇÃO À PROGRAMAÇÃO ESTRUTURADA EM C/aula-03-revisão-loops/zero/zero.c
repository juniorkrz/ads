/*

Professor: Eliton Marcos Vela

Problemática: Desenvolva um programa que
solicite um número, imprima-o e continue
solicitando números até que seja digitado 0,
momento em que o programa encerrará.

*/

#include <stdio.h>

int main(void)
{
    int entrada;

    do
    {
        printf("Digite um número: ", entrada);
        scanf("%d", &entrada);
        printf("O número digitado foi: %d\n", entrada);
    } while (entrada != 0);

    return 0;
}