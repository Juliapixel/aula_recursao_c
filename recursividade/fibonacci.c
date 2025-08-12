#include <stdio.h>
int fibonacci (int n) {
    if (n == 0 ) return 0;
    if (n == 1 ) return 1; 
    return fibonacci (n - 1) + fibonacci (n - 2);
}
    int main() {
        int termos;
        int i;
        printf(" Digite a quentidade de termos da sequencia fibonacci que deseja: ");
        scanf("%d", &termos);
        if (termos <= 0) {
            printf("Apenas valores positivos são válidos");
        }
        else {
            printf("Sequência Fibonacci com %d termos: \n", termos);
        for (i = 0; i < termos; i++) {
            printf("%d\n", fibonacci (i));
        }
        printf("\n");
    }
    return 0;
    }