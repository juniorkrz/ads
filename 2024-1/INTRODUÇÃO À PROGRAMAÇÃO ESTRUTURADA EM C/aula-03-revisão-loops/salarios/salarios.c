/*

Professor: Eliton Marcos Vela

Aluno: Antônio Roberto Júnior

Problemática: Desenvolva um programa que
leia 15 salários e mostre o maior salário
e a média salarial de uma empresa.

*/

#include <stdio.h>

/* Definindo quantidade de funcionários */
#define QTD_FUNCIONARIOS 15

int main(void)
{
    float maiorSalario = 0, salario = 0,
    soma = 0, media = 0;

    /* Solicita entrada ao usuário para cada funcionário */
    for (int i = 0; i < QTD_FUNCIONARIOS; i++)
    {
        printf("Digite o salário do funcionário %d: ", i + 1);
        scanf("%f", &salario);

        soma += salario;
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }
    }

    /* Calculando a média e imprimindo os resultados */
    media = soma / QTD_FUNCIONARIOS;
    printf("Maior salário: %.2f\n", maiorSalario);
    printf("Média salarial: %.2f", media);

    return 0;
}