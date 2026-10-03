#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 >nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    char produto[50];
    int quantidade;
    float precoUn, totalVenda;

    int totalVendasRealizadas = 0;
    int totalProdutosVendidos = 0;
    float faturamentoTotal = 0.0;
    float maiorVenda = 0.0;

    char opcao;

    do {
        printf("\n==== Registro de Vendas ====\n");
        printf("\nDigite o nome do produto: \n");
        scanf(" %[^\n]", produto);

        printf("Digite o preço unitário do produto: \n");
        scanf("%f", &precoUn);

        printf("Digite a quantidade vendida: \n");
        scanf("%d", &quantidade);

        totalVenda = precoUn * quantidade;
        printf("Total da venda: R$ %.2f\n", totalVenda);

        totalVendasRealizadas++;
        totalProdutosVendidos += quantidade;
        faturamentoTotal += totalVenda;

        if (totalVenda > maiorVenda) {
            maiorVenda = totalVenda;
        }

        printf("\nDeseja registrar outra venda? (s/n): ");
        scanf(" %c", &opcao);

    } while (opcao == 's' || opcao == 'S');

    printf("\n==============================\n");
    printf("\nResumo do Dia\n");
    printf("\nQuantidade total de vendas realizadas: %d\n", totalVendasRealizadas);
    printf("\nQuantidade total de produtos vendidos: %d\n", totalProdutosVendidos);
    printf("\nFaturamento total do dia: R$ %.2f\n", faturamentoTotal);
    printf("\nMaior venda realizada: R$ %.2f\n", maiorVenda);
    printf("\n==============================\n");

    
    return 0;
}