#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int idade;

    printf("Digite a sua idade: \n");
    scanf("%d", &idade);    

        if (idade >= 18) {
        printf("Você é maior de idade. \n");
    } else {
        printf("Você é menor de idade. \n");
    }

    
    return 0;
}