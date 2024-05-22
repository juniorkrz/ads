/*

Professor: Eliton Marcos Vela

Aluno: Antônio Roberto Júnior

Problemática: Faça um programa C para calular o
número de lâmpadas 60 watts necessárias para um determinado cômodo.
O programa deverá ler um conjunto de informações,
tais como: tipo, largura e comprimento do cômodo.
O programa termina quando o tipo de cômodo for igual -1.
A tabela abaixo mostra, para cada tipo de cômodo,
a quantidade de watts por metro quadrado.

Dicas: Use uma estrutura struct para agrupar logicamente
as informações de um comodo (int tipo de comodo, float largura e float altura).

Usar uma função (float calculaArea) para calcular a área do cômodo.
Os atributos de entrada serão a largura e comprimento do cômodo.

Usar uma função (float lampada) para calcular a quantidade
de lâmpadas necessárias para o cômodo.
Os atributos de entrada serão o tipo de cômodo e a metragem (em m2) do cômodo.

Obs: Utilize a função ceil(numero) em #include math.h para realizar o arrendondamento para cima.

|   Tipo Cômodo   |     Potência (watt/m2)    |
|      0          |           12              |
|      1          |           15              |
|      2          |           18              |
|      3          |           20              |
|      4          |           22              |

*/


#include <stdio.h>
#include <math.h>

#define QTD_COMODOS 5
#define POTENCIA_LAMPADA 60

typedef struct Comodo {
    int tipo;
    float largura;
    float altura;
    int lampadas;
};

/* Tabela fornecida na problemática */
int wattsPorComodo[QTD_COMODOS] = {
    12,
    15,
    18,
    20,
    22
};

/* Função para calcular a área */
float calculaArea(float largura, float comprimento)
{
    return largura * comprimento;
}

/* Função para calcular a quantidade de lâmpadas necessárias */
float calculaLampada(int tipo, float area)
{
    int wattsNecessarios = wattsPorComodo[tipo] * area;
    return ceil(wattsNecessarios / POTENCIA_LAMPADA);
}

int main(void)
{
    /* Vetor para os cômodos */
    struct Comodo comodos[QTD_COMODOS];

    /* Iniciando o vetor com total de lâmpadas igual a zero */
    for(int i = 0; i < QTD_COMODOS; i++)
    {
        struct Comodo comodo;
        comodo.lampadas = 0;
        comodos[i] = comodo;
    }

    while(1)
    {
        struct Comodo comodo;

        printf("Digite o tipo do cômodo (0/%d): ", QTD_COMODOS - 1);
        scanf("%d", &comodo.tipo);

        /* Encerra o loop caso o tipo do comodo seja -1 */
        if (comodo.tipo == -1){
            break;
        }

        /* Solicita a largura do cômodo */
        printf("Digite a largura do cômodo: ");
        scanf("%f", &comodo.largura);

        /* Solicita a altura do cômodo */
        printf("Digite a altura do cômodo: ");
        scanf("%f", &comodo.altura);

        /* Calcula a área */
        float area = calculaArea(comodo.largura, comodo.altura);

        /* Calcula a quantidade de lâmpadas necessárias */
        comodos[comodo.tipo].lampadas = calculaLampada(comodo.tipo, area);
    }

    /* Imprimindo resultados */
    for(int i = 0; i < QTD_COMODOS; i++)
    {
        printf("Lâmpadas necessárias no cômodo %d: %d\n", i, comodos[i].lampadas);
    }

    return 0;
}