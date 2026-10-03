#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
    system("chcp 65001 >nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int hEntrada, hSaida, mEntrada, mSaida, horasCobradas, duracaoMinutos, minEntrada, minSaida;
    float valorCobrado;

    printf ("Digite a hora e minuto de entrada separada por espaço ('13 45', por exemplo): \n");
    printf("Entrada: ");
    scanf("%d %d", &hEntrada, &mEntrada);
    printf("Saída: ");
    scanf("%d %d", &hSaida, &mSaida);

    minEntrada = hEntrada * 60 + mEntrada;
    minSaida = hSaida * 60 + mSaida;

    duracaoMinutos = minSaida - minEntrada; 

    horasCobradas = (duracaoMinutos / 60);

    if (duracaoMinutos % 60 > 0) {
        horasCobradas++;
    }

    if (horasCobradas <= 1) {
    valorCobrado = 10.00;
    } else {
        valorCobrado = 10.00 + (horasCobradas - 1) * 5.00;
    }

    printf("Tempo de permanência: %d horas e %d minutos\n", duracaoMinutos / 60, duracaoMinutos % 60);
    printf("Valor Cobrado: R$ %.2f\n", valorCobrado);

    return 0;
}