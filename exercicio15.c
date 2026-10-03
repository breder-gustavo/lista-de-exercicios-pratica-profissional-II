#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int numero1, numero2, numero3;

    printf("Digite o primeiro número: \n");
    scanf("%d", &numero1);
    printf("Digite o segundo número: \n");
    scanf("%d", &numero2);
    printf("Digite o terceiro número: \n");
    scanf("%d", &numero3);

    if (numero1 > numero2 && numero1 > numero3) {
        printf("O maior número é: %d\n", numero1);
    } else if (numero2 > numero1 && numero2 > numero3) {
        printf("O maior número é: %d\n", numero2);
    } else {
        printf("O maior número é: %d\n", numero3);
    }
    
    return 0;
}