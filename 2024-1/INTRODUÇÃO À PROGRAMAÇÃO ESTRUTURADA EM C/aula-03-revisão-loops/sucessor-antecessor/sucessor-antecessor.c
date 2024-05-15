/*

Professor: Eliton Marcos Vela

Problemática: Desenvolva um programa que
solicite um número, entre 0 e 9.

Se o número for par, imprima o sucessor.
Se for impar, imprima o antecessor.

*/

#include <stdio.h>

int main(void)
{
    int entrada, resultado;

    do
    {
        printf("Digite um número: ", entrada);
        scanf("%d", &entrada);
        if(entrada % 2 == 0) {
            resultado = entrada + 1;
            printf("O sucessor de %d é: %d\n", entrada, resultado);
        } else {
            resultado = entrada - 1;
            printf("O antecessor de %d é: %d\n", entrada, resultado);
        }
    } while (entrada != 0 && entrada != 9);

    return 0;
}