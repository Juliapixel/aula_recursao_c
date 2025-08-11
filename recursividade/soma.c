#include <stdio.h>

int soma(int n) {
    if (n == 0) return 0;
    return n + soma(n - 1);
}

int main(int argc, char const *argv[])
{
    int numero = 5;
    printf("Soma de %d = %d\n", numero, soma(numero));
    return 0;
}
