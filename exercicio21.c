#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    int i;

    for (i = 1; i <=10; i++) {
        printf("%d\n", i);
    }
    
    return 0;
}