#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float valorHora, horas, salario;
    
    printf("Digite o valor da hora trabalhada: \n");
    scanf("%f", &valorHora);

    printf("Digite a quantidade de horas trabalhadas: \n");
    scanf("%f", &horas);

    salario = valorHora * horas;

    printf("O salário do funcionário é: %.2f \n", salario);

    return 0;
}