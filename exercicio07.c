#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    double graus, fahrenheit;

    printf("Digite a temperatura em graus Celsius: \n");
    scanf("%lf", &graus);

    fahrenheit = (graus * 9 / 5) + 32;

    printf("A temperatura em Fahrenheit é: %.1lf \n", fahrenheit);
    
    return 0;
}