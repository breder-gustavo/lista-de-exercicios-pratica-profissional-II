#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    double distancia, combustivel, consumoMedio;

    printf("Digite a distância percorrida em km: \n");
    scanf("%lf", &distancia);

    printf("Digite a quantidade de combustível gasto em litros: \n");
    scanf("%lf", &combustivel);   

    consumoMedio = distancia / combustivel;

    printf("O consumo médio do veículo é: %.2lf km/l \n", consumoMedio);
    
    return 0;
}
