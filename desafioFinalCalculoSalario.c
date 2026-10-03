#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 >nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float valorDia;
    int diasTrabalhados;
    float salarioBruto, salarioLiquido, descontoVT, descontoINSS;
    float percentINSS = 0.0;

    printf("Informe o valor do dia de trabalho: ");
    scanf("%f", &valorDia);

    printf("Informe a quantidade de dias trabalhados: ");
    scanf("%d", &diasTrabalhados);

    float refeicao = diasTrabalhados * 22.00;

    salarioBruto = valorDia * diasTrabalhados;
    descontoVT = salarioBruto * 0.06;
    
    if (salarioBruto <= 1621.00) {
        percentINSS = 0.075;
    } else if (salarioBruto > 1621.00 && salarioBruto <= 2902.84) {
        percentINSS = 0.09;
    } else if (salarioBruto > 2902.84 && salarioBruto <= 4354.27) {
        percentINSS = 0.12;
    } else if (salarioBruto > 4354.27 && salarioBruto <= 8475.55) {
        percentINSS = 0.14; // 14%
    } else {
        percentINSS = 0.14;
    }
        
    descontoINSS = salarioBruto * percentINSS;

    float totalDescontos = descontoINSS + descontoVT;
    salarioLiquido = salarioBruto - totalDescontos;
    
    printf("\n========Cálculo Salário Bruto===========");
    
    printf("\nValor diário: R$ %.2f", valorDia);
    printf("\nDias trabalhados: %d", diasTrabalhados);
    printf("\nVale Refeição: R$ %.2f", refeicao);
    printf("\nSalário Bruto: R$ %.2f", salarioBruto);

    printf("\n\n========= Cálculo de Descontos =========");
    printf("\nDesconto INSS (%.1f%%): R$ %.2f", percentINSS * 100, descontoINSS);
    printf("\nDesconto Vale Transporte (6%%): R$ %.2f", descontoVT);
    printf("\nTotal de Descontos: R$ %.2f", totalDescontos);
    
    printf("\n\n========= Cálculo de Salário Líquido =========");
    printf("\nVale Refeição: R$ %.2f", refeicao);
    printf("\nSalário Líquido: R$ %.2f", salarioLiquido);
    
    printf("\n=========================================\n");
    printf("\nLíquido + Refeição: R$ %.2f", salarioLiquido + refeicao);
    printf("\n=========================================\n");
    
    
    return 0;
}