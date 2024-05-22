/*

Professor: Eliton Marcos Vela

Aluno: Antônio Roberto Júnior

Exemplo 01 - uso de funções

*/

#include <stdio.h>
#include <stdlib.h>

/* Declarando protótipo da função */
void linha(int);

int main (void)
{
    linha(20);
    printf("\xDB Um programa em C \xDB \n");
    linha(20);
    system("PAUSE");
    return 0;
}

/* Desenha uma linha na tela */

void linha(int n)
{
    for(int j=1; j <= n; j++)
    {
        printf("\xDB");
    }
    printf("\n");
}

/*

Saida:
████████████████████
█ Um programa em C █
████████████████████
Pressione qualquer tecla para continuar. . .

*/