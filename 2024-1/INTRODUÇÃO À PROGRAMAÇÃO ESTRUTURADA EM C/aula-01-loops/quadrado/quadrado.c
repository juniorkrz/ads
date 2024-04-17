/*

Professor: Eliton Marcos Vela

Problemática: Escreva um programa que lê o tamanho do lado de um quadrado
e imprime um quadrado daquele tamanho com asteriscos e espaços em branco.
Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.
Para lado igual a 5:
* * * * * 
*       * 
*       * 
*       * 
* * * * * 

*/

#include <stdio.h>

/* Declarando funções */
void desenharLinha(int, int);
void desenharQuadrado(int);

int main(void)
{
    int tamanho;
    printf("Digite o tamanho do quadrado: ");
    scanf("%d", &tamanho);/* Solicita entrada ao usuário */

    if (tamanho == 0 || tamanho > 20)/* Verifica se o tamanho do quadrado é válido */
    {
        printf("Tamanho do quadrado inválido! Digite um número inteiro entre 1 e 20.\n");
        return 1;/* Finaliza o programa com código de erro */
    }

    desenharQuadrado(tamanho);

    return 0;
}

/* Função para desenhar as linhas do quadrado */
void desenharLinha(int tamanho, int linhaCompleta)
{
        for (int i = 0; i < tamanho; i++)
        {
            if (i == 0 || i == tamanho - 1 || linhaCompleta)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");

}

/* Função para desenhar o quadrado */
void desenharQuadrado(int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        int linhaCompleta = i == 0 || i == tamanho - 1;
        desenharLinha(tamanho, linhaCompleta);
    }
}