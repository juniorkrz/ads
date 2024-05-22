/*

Professor: Eliton Marcos Vela

Aluno: Antônio Roberto Júnior

Problemática: Faça um programa que controle os estoque de 5 produtos
em 5 armazéns de um supermercado, conforme na figura estoque.png:

O programa deverá ler o número da linha e da coluna, correspondente ao
produto no armazém, e a quantidade a ser retirada do estoque.

Caso a quantidade solicitada for menor ou igual a quantidade em estoque,
o programa deverá emitir uma mensagem de atendimento e dar baixa no estoque.

Do contrário, emitir mensagem, "Estoque com quantidade insuficiente para atender ao pedido".
O programa termina quando o número da linha for igual a -1.

Utilize a declaração abaixo para resolver o exercício:

int estoque[5][5] = {
    {150, 0, 100, 150, 200},
    {200, 300, 230, 100, 90},
    {250, 300, 0, 200, 150},
    {300, 100, 90, 450, 0},
    {350, 300, 400, 250, 200}
};

*/


#include <stdio.h>

int main(void)
{
    int estoque[5][5] = {
        {150, 0, 100, 150, 200},
        {200, 300, 230, 100, 90},
        {250, 300, 0, 200, 150},
        {300, 100, 90, 450, 0},
        {350, 300, 400, 250, 200}
    };

    while(1)
    {
        int armazem, produto, qtdSolicitada;

        printf("Digite o número do armazém: ");
        scanf("%d", &armazem);

        if (armazem == -1){
            break;
        }

        printf("Digite o número do produto: ");
        scanf("%d", &produto);

        int qtdEstoque = estoque[armazem][produto];

        printf("Digite a quantidade a ser retirada (Disponível: %d): ", qtdEstoque);
        scanf("%d", &qtdSolicitada);

        if (qtdSolicitada <= qtdEstoque){
            estoque[armazem][produto] -= qtdSolicitada;
            printf("Foram removidos %d unidades do produto %d no estoque do armazém %d. Total em estoque agora: %d\n", qtdSolicitada, produto, armazem, estoque[armazem][produto]);
        } else {
            printf("O estoque do produto %d no armazém %d é insuficiente. Há apenas %d unidades em estoque.\n", produto, armazem, qtdEstoque);
        }
    }

    return 0;
}