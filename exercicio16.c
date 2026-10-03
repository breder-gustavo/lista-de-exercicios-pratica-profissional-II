#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    double nota1, nota2, media;

    printf("Digite a primeira nota: \n");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: \n");
    scanf("%lf", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 7.0) {
        printf("Aprovado! Média: %.2lf\n", media);
    } else if (media >= 5.0) {
        printf("Recuperação! Média: %.2lf\n", media);
    } else {
        printf("Reprovado! Média: %.2lf\n", media);
    }
    
    return 0;
}