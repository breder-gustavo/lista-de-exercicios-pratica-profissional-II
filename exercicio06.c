#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    float raio, area, pi;

    printf("Digite o valor do raio: \n");
    scanf ("%f", &raio);

    pi = 3.14159;
    area = pi * (raio * raio);
    
    printf("A área do círculo é: %.2f \n", area);

    return 0;
}