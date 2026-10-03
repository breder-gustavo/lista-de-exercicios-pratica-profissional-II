#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int alunos;
    float nota, somaNotas = 0.0, media;

    printf("Digite o número de alunos: ");
    scanf("%d", &alunos);

    for (int i = 1; i <= alunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        somaNotas += nota;
    }

    media = somaNotas / alunos;

    if (alunos > 0) {
        printf("A média das notas é: %.2f\n", media);
    } else {
        printf("Nenhum aluno foi registrado.\n");
    }

    return 0;
}