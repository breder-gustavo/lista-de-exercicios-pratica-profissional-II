#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    char produto [50];
    float precoUn, precoFinal;
    int quantidade;

    printf("Digite o nome do produto: \n");
    scanf ("%s", produto);

    printf("Digite a quantidade comprada: \n");
    scanf ("%d", &quantidade);

    printf("Digite o preço unitário do produto: \n");
    scanf ("%f", &precoUn);

    precoFinal = (quantidade * precoUn);

    printf("O produto comprado foi: %s \n", produto);
    printf("A quantidade comprada foi: %d \n", quantidade);

    printf("O preço final do produto %s é: %.2f \n", produto, precoFinal);

    return 0;
}