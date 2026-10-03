#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int i;

    for (i = 10; i >= 1; i--) {
        printf("%d\n", i);
    }

    if (i == 0) {
        printf("Fim da Contagem!\n");
    }
    
    return 0;
}