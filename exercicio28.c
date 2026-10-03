#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int N, numero, maior, menor;

    printf("Digite a quantidade de números que deseja informar: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("A quantidade de números deve ser maior que zero.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &numero);

        if (i == 0) {
            maior = numero;
            menor = numero;
        } else {
            if (numero > maior) {
                maior = numero;
            }
            if (numero < menor) {
                menor = numero;
            }
        }
    }

    printf("O maior número informado é: %d\n", maior);
    printf("O menor número informado é: %d\n", menor);
    
    return 0;
}