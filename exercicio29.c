#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int senha = 1234;
    int input;
    
    printf("Digite a senha numérica: ");
    scanf("%d", &input);

    while (input != senha) {
        printf("Acesso negado! Tente novamente: ");
        scanf("%d", &input);

    }
    
    printf("Acesso permitido!\n");
    
    return 0;
}