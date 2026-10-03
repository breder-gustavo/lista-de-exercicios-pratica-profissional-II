#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float base, altura, area;

    printf("Digite a base do retângulo: \n");
    scanf ("%f", &base);

    printf("Digite a altura do retângulo: \n");
    scanf ("%f", &altura);  

    area = (base * altura);

    printf("A base do retângulo é: %.1f \n", base);
    printf("A altura do retângulo é: %.1f \n", altura);
    printf("A área do retângulo é: %.1f \n", area);
    
    return 0;
}