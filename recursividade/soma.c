#include <stdio.h>

int soma(int n) {
    if (n == 0) return 0;
    return n + soma(n - 1);
}

int main(int argc, char const *argv[])
{
    int numero;
    printf("Digite um número para calcular a soma: ");
    scanf("%d", &numero);
    if (numero < 0) {
        printf("Digite apenas numeros positivos.\n");
    } else {
        printf("Soma de 1 ate %d = %d\n", numero, soma(numero));
    }
    return 0;
}
