#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int N, soma = 0; 

    printf("Digite um número inteiro: \n");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma += i;
    }

    printf("Processamento: ");

    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        if (i < N) {
            printf(" + ");
        }
        else {
            printf(" = %d", soma);
        }
    }

    printf("\nA soma de de 1 a %d é: %d\n", N, soma);
    
    return 0;
}