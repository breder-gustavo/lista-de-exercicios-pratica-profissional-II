#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int numero1, numero2, soma;

    printf("Digite o primeiro número: \n");
    scanf("%d", &numero1);

    printf("Digite o segundo número: \n");
    scanf("%d", &numero2);
    
    soma = numero1 + numero2;
    printf("O primeiro número digitado foi: %d \n", numero1);
    printf("O segundo número digitado foi: %d \n", numero2);

    printf("A soma dos números é: %d", soma);
    
    return 0;
}