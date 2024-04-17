/*

Professor: Eliton Marcos Vela

Problemática: Chico tem 1,15m e cresce 2 centímetros por ano,
enquanto Juca tem 1,10m e cresce 3 centímetros por ano.
Construir um programa em C que calcule e imprima quantos anos
serão necessários para que Juca seja maior que Chico
(Utilize a estrutura while).

*/

#include <stdio.h>

int main(void)
{
    /* Declarando variáveis */
    int alturaChico, crescimentoChico,
    alturaJuca, crescimentoJuca,
    anos;

    /* Dados Chico */
    alturaChico = 115;
    crescimentoChico = 2;

    /* Dados Juca */
    alturaJuca = 110;
    crescimentoJuca = 3;

    anos = 0;

    while(alturaJuca < alturaChico)
    {
        alturaChico += crescimentoChico;
        alturaJuca += crescimentoJuca;
        anos++;
    }

    printf("Foram necessários %d anos para Juca ser maior que Chico.", anos);
    return 0;
}