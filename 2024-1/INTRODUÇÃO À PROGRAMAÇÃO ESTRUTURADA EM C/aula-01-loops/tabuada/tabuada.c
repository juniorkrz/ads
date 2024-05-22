/*

Professor: Eliton Marcos Vela

Aluno: Antônio Roberto Júnior

Problemática: Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

*/

#include <stdio.h>

int main(void)
{
    for (int numero = 1; numero <= 9; numero++)
    {
        printf("Tabuada do %d\n", numero);
        for (int multiplicador = 1; multiplicador <= 10; multiplicador++)
        {
            int resultado = numero * multiplicador;
            printf("%d x %d = %d\n", numero, multiplicador, resultado);
        }
        printf("\n");
    }
    return 0;
}