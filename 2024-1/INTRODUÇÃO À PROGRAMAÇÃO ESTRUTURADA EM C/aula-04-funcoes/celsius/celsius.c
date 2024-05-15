/*

Professor: Eliton Marcos Vela

Exemplo 03 - uso de funções sem protótipos

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


/* Definindo função antes da função principal - não precisa de protótipo */

float celsius(float fahr)
{
    return ((fahr - 32.0) * 5.0 / 9.0);
}

int main (void)
{
    float c, f;
    printf("Digite a temperatura em graus fahrenheit: ");
    scanf("%f", &f);

    c = celsius(f);
    printf("celsius = %.2f\n", c);
    system("PAUSE");
    return 0;
}