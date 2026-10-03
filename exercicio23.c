#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int i;

    for (i = 2; i <= 100; i +=2) {
        printf("%d\n", i);
    }
    
    return 0;
}