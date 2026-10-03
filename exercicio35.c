#include <stdio.h>
#include <string.h>

int main() {
    int qtdAlunos;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &qtdAlunos);

    if (qtdAlunos <= 0) {
        printf("Quantidade de alunos invalida.\n");
        return 0;
    }

    int aprovados = 0;
    int recuperacao = 0;
    int reprovados = 0;

    float somaMedias = 0.0;
    float maiorMedia = -1.0;
    float menorMedia = 11.0;

    for (int i = 1; i <= qtdAlunos; i++) {
        char nome[50];
        float nota1, nota2, media;

        printf("\n--- Aluno %d ---\n", i);
        printf("Nome: \n");
        scanf(" %[^\n]", nome);

        printf("Nota 1: ");
        scanf("%f", &nota1);

        printf("Nota 2: ");
        scanf("%f", &nota2);

        media = (nota1 + nota2) / 2.0;
        somaMedias += media;

        if (i == 1) {
            maiorMedia = media;
            menorMedia = media;
        } else {
            if (media > maiorMedia) maiorMedia = media;
            if (media < menorMedia) menorMedia = media;
        }

        printf("Media de %s: %.2f - ", nome, media);
        if (media >= 7.0) {
            printf("Aprovado\n");
            aprovados++;
        } else if (media >= 5.0) {
            printf("Recuperacao\n");
            recuperacao++;
        } else {
            printf("Reprovado\n");
            reprovados++;
        }
    }

    float mediaGeral = somaMedias / qtdAlunos;

    printf("\n====================================\n");
    printf("        RESUMO DA TURMA             \n");
    printf("====================================\n");
    printf("Quantidade total de alunos: %d\n", qtdAlunos);
    printf("Quantidade de aprovados:    %d\n", aprovados);
    printf("Quantidade em recuperacao: %d\n", recuperacao);
    printf("Quantidade de reprovados:   %d\n", reprovados);
    printf("Media geral da turma:       %.2f\n", mediaGeral);
    printf("Maior media da turma:       %.2f\n", maiorMedia);
    printf("Menor media da turma:       %.2f\n", menorMedia);

    return 0;
}