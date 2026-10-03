#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    float valor_original, percentual_desconto, valor_desconto, valor_final;

    printf("Digite o valor da compra (R$): ");
    scanf("%f", &valor_original);

    if (valor_original <= 100.00) {
        percentual_desconto = 0.0;
    } else if (valor_original <= 500.00) {
        percentual_desconto = 5.0;
    } else {
        percentual_desconto = 10.0;
    }

    valor_desconto = valor_original * (percentual_desconto / 100.0);
    valor_final = valor_original - valor_desconto;

    printf("\n--- RESUMO DA COMPRA ---\n");
    printf("Valor original: R$ %.2f\n", valor_original);
    printf("Percentual de desconto: %.0f%%\n", percentual_desconto);
    printf("Valor do desconto: R$ %.2f\n", valor_desconto);
    printf("Valor final com desconto: R$ %.2f\n", valor_final);

    return 0;

}