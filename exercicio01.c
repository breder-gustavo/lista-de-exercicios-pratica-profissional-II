#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    char nome[50];
    printf("Digite seu nome: \n");
    scanf("%s", nome);

    printf("Olá, %s! Bem-vindo à disciplina de lógica de programação.\n", nome);
    
    return 0;
}