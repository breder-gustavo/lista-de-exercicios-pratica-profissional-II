#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int numero1, numero2;
    char operacao;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    printf("Digite a operação desejada (+, -, *, /): ");
    scanf(" %c", &operacao);

    if (operacao == '+') {
        printf("Resultado: %d\n", numero1 + numero2);
    } else if (operacao == '-') {
        printf("Resultado: %d\n", numero1 - numero2);
    } else if (operacao == '*') {
        printf("Resultado: %d\n", numero1 * numero2);
    } else if (operacao == '/') {
        printf("Resultado: %.2f\n", (float)numero1 / numero2);
    } else if(operacao == '/' && numero2  == 0) {
        printf("Operação inválida!\n");
    }
    
    
    return 0;
}