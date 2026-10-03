#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int numero1, numero2, soma, sub, mult, divisao;

    printf("Digite o primeiro número: \n");
    scanf ("%d", &numero1);
    
    printf("Digite o segundo número: \n");
    scanf ("%d", &numero2);

    soma = (numero1 + numero2);
    sub = (numero1 - numero2);
    mult = (numero1 * numero2);
    divisao = (numero1 / numero2);

    printf("O resultado da soma é: %d \n", soma);
    printf("O resultado da subtração é: %d \n", sub);
    printf("O resultado da multiplicação é: %d \n", mult);
    printf("O resultado da divisão é: %d \n", divisao);

    return 0;
}