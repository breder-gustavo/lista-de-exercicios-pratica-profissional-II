#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float media, soma = 0.0;
    float nota;
    int alunos = 10;
    int aprovados = 0, reprovados = 0;
    
    for (int i = 1; i <= alunos; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        
        soma += nota;

        media = soma / alunos;

        if (nota >= 7.0) {
            printf("Aprovado\n");
            aprovados++;
           } else {
            printf("Reprovado\n");
            reprovados++;
        }
    }
    
    printf("Número de alunos aprovados: %d\n", aprovados);
    printf("Número de alunos reprovados: %d\n", reprovados);
    
    printf("A média das notas é: %.2f\n", media);
    
    
    float percentual = (float)aprovados / alunos * 100;

    printf("O percentual de aprovação é: %.2f%%\n", percentual);
    

    
    return 0;
}