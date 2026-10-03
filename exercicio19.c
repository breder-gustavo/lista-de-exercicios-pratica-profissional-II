#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    double altura, peso, imc;

    printf("Digite sua altura em metros: \n");
    scanf("%lf", &altura);

    printf("Digite seu peso em kg: \n");
    scanf("%lf", &peso);

    imc = peso / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Peso normal\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Sobrepeso\n");
    } else if (imc >= 30) {
        printf("Obesidade\n");
    }
    
    return 0;
}