/*

Professor: Eliton Marcos Vela

Exemplo 02 - uso de funções

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* Declarando protótipo da função */
void doisbeeps();

int main (void)
{
    doisbeeps();
    printf("Digite um caracter\n");
    getche();
    doisbeeps();
    system("PAUSE");
    return 0;
}

/* Toca o alto-falante duas vezes */

void doisbeeps()
{
    printf("\x7");
    for(int k=1; k < 5000; k++)
    {
        printf("\x7\n");
    }
}