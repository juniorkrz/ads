/*

Professor: Eliton Marcos Vela

Aluno: Antônio Roberto Júnior

Problemática: Uma empresa comercial possui um programa
para controle das receitas e despesas em seus 10 projetos.
Os projetos são numerados de 0 até 9.

Faça um programa C que controle a entrada e saída de recursos dos projetos.
O programa deverá ler um conjunto de informações contendo:
Número do projeto, valor, tipo despesa ("R" - Receita e "D" - Despesa).
O programa termina quando o valor do código do projeto for igual a -1.
Sabe-se que Receita deve ser somada ao saldo do projeto e despesa subtraída do saldo do projeto.

Ao final do programa, imprimir o saldo final de cada projeto.

Dica: Usar uma estrutura do tipo vetor para controlar os saldos dos projetos.
Usar o conceito de struct para agrupar as informações lidas.

*/


#include <stdio.h>

#define QTD_PROJETOS 10

typedef struct Projeto {
    int numero;
    char tipo;
    float saldo;
};

/* Função para verificar se o tipo da transação é válido */
int tipoValido(char tipo)
{
    return (
        tipo == 'r' ||
        tipo == 'R' ||
        tipo == 'd' ||
        tipo == 'D'
    );
}

int main(void)
{
    /* Vetor para os projetos */
    struct Projeto projetos[QTD_PROJETOS];

    /* Iniciando o vetor com saldo igual a zero */
    for(int i = 0; i < QTD_PROJETOS; i++)
    {
        struct Projeto projeto;
        projeto.saldo = 0.0;
        projetos[i] = projeto;
    }

    while(1)
    {
        struct Projeto projeto;
        float valor;

        printf("Digite o número do projeto: ");
        scanf("%d", &projeto.numero);

        /* Encerra o loop caso o número do projeto seja -1 */
        if (projeto.numero == -1){
            break;
        }

        /* Solicita valor do projeto */
        printf("Digite o valor do projeto: ");
        scanf("%f", &valor);

        /* Solicitar tipo da transação */
        projeto.tipo = 'X';/* Atribui um valor inicial inválido */
        while(!tipoValido(projeto.tipo))/* Enquanto o tipo for inválido, solicita novamente */
        {
            printf("Digite o tipo (R - Receita/D - Despesa): ");
            getchar();/* Limpa a entrada do usuário */
            scanf("%c", &projeto.tipo);

            if (projeto.tipo == 'r' || projeto.tipo == 'R'){
                projetos[projeto.numero].saldo += valor;
            } else if (projeto.tipo == 'd' || projeto.tipo == 'D'){
                projetos[projeto.numero].saldo -= valor;
            } else {
                printf("Opção inválida, insira R (receita) ou D (despesa)!\n");
            }
        }
    }

    /* Imprimindo resultados */
    for(int i = 0; i < QTD_PROJETOS; i++)
    {
        printf("Saldo do projeto %d: %.2f\n", i, projetos[i].saldo);
    }

    return 0;
}