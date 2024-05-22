/*

Professor: Eliton Marcos Vela

Aluno: Antônio Roberto Júnior

Exemplo 01 - uso de vetores inteiros e de caracteres

*/

#include <stdio.h>

/* Definindo quantidade de alunos e notas */
#define QTD_ALUNOS 5
#define QTD_NOTAS 3

int main(void)
{
    float notasAluno[QTD_ALUNOS][QTD_NOTAS];
    int contAluno, contNota;
    float media[QTD_ALUNOS], soma[QTD_ALUNOS];

    /* Solicita as notas ao usuário */
    for (contAluno = 0; contAluno < QTD_ALUNOS; contAluno++)
    {
        for (contNota = 0; contNota < QTD_NOTAS; contNota++)
        {
            printf("Digite a nota %d do aluno %d: ", contNota + 1, contAluno + 1);
            scanf("%f", &notasAluno[contAluno][contNota]);
            soma[contAluno] += notasAluno[contAluno][contNota];
        }
    }

    /* Imprime o o resultado */
    for (contAluno = 0; contAluno < QTD_ALUNOS; contAluno++)
    {
        media[contAluno] = soma[contAluno] / QTD_NOTAS;
        printf("A média do aluno %d é %.1f.", contAluno + 1, media[contAluno]);
        printf("\n");
    }

    return 0;
}