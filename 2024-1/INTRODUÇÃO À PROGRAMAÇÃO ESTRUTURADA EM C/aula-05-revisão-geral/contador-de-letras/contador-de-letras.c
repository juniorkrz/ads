/*

Professor: Eliton Marcos Vela

Aluno: Antônio Roberto Júnior

Problemática: Faça um programa que receba uma frase (máximo 100 caracteres)
e uma letra qualquer, calcule e mostre a quantidade que essa letra aparece na frase digitada.
Para descobrir o tamanho da frase digitada utilize a função strlen(cadeia de caracteres).
Ao final, exibir o estoque (matriz).

Dica: Usar a função gets(cadeia de caracteres) - biblioteca string.h
para realizar a leitura da frase.

A função scanf só realiza leitura até o primeiro espaço em branco.

*/


#include <stdio.h>
#include <string.h>

int main(void)
{
    char frase[100];
    char letra;
    int tamanho;
    int contador = 0;

    /* Solicita a frase */
    printf("Digite uma frase qualquer (max. 100 chars): ");
    gets(frase);

    /* Solicita uma letra */
    printf("Digite uma letra qualquer: ");
    scanf("%c", &letra);

    tamanho = strlen(frase);

    /* Contando quantas vezes a letra aparece na frase */
    for(int i = 0; i < tamanho; i++)
    {
        if (frase[i] == letra){
            contador++;
        }
    }

    /* Imprimindo resultado */
    printf("A letra '%c' apareceu %d vezes.", letra, contador);
    return 0;
}