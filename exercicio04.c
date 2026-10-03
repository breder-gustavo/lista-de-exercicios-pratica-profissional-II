#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    double nota1, nota2, nota3, media;

    printf("Digite a primeira nota: \n");
    scanf("%lf", &nota1);
    
    printf("Digite a segunda nota: \n");
    scanf("%lf", &nota2);
    
    printf("Digite a terceira nota: \n");
    scanf("%lf", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("A primeira nota é: %.2lf \n", nota1);
    printf("A segunda nota é: %.2lf \n", nota2);
    printf("A terceira nota é: %.2lf \n", nota3);

    printf("A média das notas é: %.2lf \n", media);

    return 0;
}