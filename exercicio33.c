#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 >nul");
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int votosCand1 = 0;
    int votosCand2 = 0;
    int votosCand3 = 0;
    int votosNulos = 0;


    printf("Candidato 1\n");
    printf("Candidato 2\n");
    printf("Candidato 3\n");

    printf("Digite o número do candidato (1, 2, 3) para votar ou 0 para encerrar:\n");
    
    int voto;


    do {
        scanf("%d", &voto);
        switch (voto)
        {
        case 1:
            votosCand1++;
            printf("Voto registrado para o Candidato 1.\n");
            break;
        case 2:
            votosCand2++;
            printf("Voto registrado para o Candidato 2.\n");
            break;
        case 3:
            votosCand3++;
            printf("Voto registrado para o Candidato 3.\n");
            break;
        case 0:
            printf("Votação encerrada.\n");
            break;
        default:
            votosNulos++;
            printf("Voto nulo.\n");
            break;
        }
    }
    while (voto != 0);

    printf("Resultado da votação:\n");
    printf("\nCandidato 1: %d votos\n", votosCand1);
    printf("\nCandidato 2: %d votos\n", votosCand2);
    printf("\nCandidato 3: %d votos\n", votosCand3);
    printf("\nVotos nulos: %d\n", votosNulos);

    if (votosCand1 > votosCand2 && votosCand1 > votosCand3) {
        printf("\nCandidato 1 venceu a eleição!\n");
    } else if (votosCand2 > votosCand1 && votosCand2 > votosCand3) {
        printf("\nCandidato 2 venceu a eleição!\n");
    } else if (votosCand3 > votosCand1 && votosCand3 > votosCand2) {
        printf("\nCandidato 3 venceu a eleição!\n");
    } else {
        printf("\nA eleição terminou empatada.\n");
    }



    
    return 0;
}