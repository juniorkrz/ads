/*

Professor: Eliton Marcos Vela

Aluno: Antônio Roberto Júnior

Problemática: Desenvolva um programa que
leia 15 números e mostre o maior deles.

*/

#include <stdio.h>

int main(void)
{
    int maiorNumero = 0, numero = 0;

    for (int i = 0; i <= 15; i++)
    {
        /* Solicita entrada ao usuário */
        printf("Digite um número positivo e inteiro: ");
        scanf("%d", &numero);
        if (numero > maiorNumero) {
            maiorNumero = numero;
        }
    }
    printf("O maior número recebido foi: %d", maiorNumero);

    return 0;
}