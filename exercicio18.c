#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int idade;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    if (idade < 12) {
        printf("Criança.\n");
    } else if (idade > 13 && idade < 17) {
        printf("Adolescente.\n");
    } else if (idade > 18 && idade < 59) {
        printf("Adulto.\n");
    } else if (idade > 60) {
        printf("Você é um idoso.\n");
    }

    
    return 0;
}