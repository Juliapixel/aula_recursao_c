#include <stdio.h>
int potencia(int base, int expoente) {
    if (expoente == 0) return 1; 
    return base * potencia(base, expoente -1);
}
int main() {
    int base, expoente;
    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente (positivo): ");
    scanf("%d", &expoente);

    if (expoente < 0) {
    printf(" Expoente negativo é inválido nessa versão ");
    }
    
    printf("%d elevado a %d = %d\n", base, expoente, potencia(base, expoente)); 
    return 0;
}