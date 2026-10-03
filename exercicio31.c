#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 >nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float litros, valorLitro, valorBruto, valorDesconto, valorFinal;
    int percentDesconto = 0;
    valorLitro = 6.50;

    printf ("Digite a quantidade de litros abastecidos: \n");
    scanf("%f", &litros);

    
    if (litros <= 20) {
        percentDesconto = 0;
    } else if (litros > 20 && litros <= 40) {
        percentDesconto = 3;
    } else {
        percentDesconto = 5;
    }
    
    valorBruto = litros * valorLitro;
    valorDesconto = litros * valorLitro * (percentDesconto / 100.0);
    valorFinal = valorBruto - valorDesconto;

    printf("\nValor bruto: R$ %.2f\n", valorBruto);
    printf("\nO percentual de desconto é de: %d%%, resultando desconto de: R$ %.2f\n", percentDesconto, valorDesconto);
    printf("\nValor final a pagar: R$ %.2f\n", valorFinal);

    
    return 0;
}