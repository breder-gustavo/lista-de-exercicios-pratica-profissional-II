#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 >nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float saldo = 1000;
    int opcao;

    do {

    printf ("\n 1 - Consultar Saldo");
    printf ("\n 2 - Depositar");
    printf ("\n 3 - Sacar");
    printf ("\n 4 - Sair");

    printf ("\nEscolha uma opção: ");
    scanf ("%d", &opcao);

    switch (opcao) {
        case 1:
            printf ("\nSeu saldo é de R$ %.2f\n", saldo);
            break;
        case 2:
            float deposito;
            printf ("\nDigite o valor a ser depositado: ");
            scanf ("%f", &deposito);
            saldo += deposito;
            printf ("\nDepósito realizado com sucesso! Novo saldo: R$ %.2f\n", saldo);
            break;
        case 3:
            float saque;
            printf ("\nDigite o valor a ser sacado: ");
            scanf ("%f", &saque);
            if (saque <= saldo) {
                saldo -= saque;
                printf ("\nSaque realizado com sucesso! Novo saldo: R$ %.2f\n", saldo);
            } else {
                printf ("\nSaldo insuficiente para realizar o saque.\n");
            }
            break;
        case 4:
            printf ("\nSaindo do sistema...\n");
            break;
        default:
            printf ("\nOpção inválida. Tente novamente.\n");
    }

    } while (opcao != 4);

    
    return 0;
}