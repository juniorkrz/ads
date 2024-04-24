/*

Professor: Eliton Marcos Vela

Exemplo 01 - uso de vetores inteiros e de caracteres

*/

#include <stdio.h>

int main (void)
{
    const char baseDigitos[16] = {
        '0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
    };

    int convertidoNum[64];
    long int numAConverter;
    int proxDigit, base, indice = 0;

    /* Recebe o número e a base. */

    printf("Numero para ser convertido? ");
    scanf("%ld", &numAConverter);
    printf("Base? ");
    scanf("%d", &base);

    /* Converte para a base indicada. */

    do {
        convertidoNum[indice] = numAConverter % base;
        ++indice;
        numAConverter = numAConverter / base;
    }
    while (numAConverter != 0);

    /* Exibe o resultado em ordem reversa. */

    printf("Numero convertido = ");
    for (--indice; indice >= 0; --indice) {
        proxDigit = convertidoNum[indice];
        printf("%c", baseDigitos[proxDigit]);
    }

    printf("\n");

    return 0;
}

/*

Saida:
Numero para ser convertido? 320
Base? 16
Numero convertido = 140

*/