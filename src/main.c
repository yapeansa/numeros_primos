#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include "primos.h"

int main()
{
    int n;
    clock_t start, end;

    do
    {
        printf("Digite um número inteiro maior do que 1: ");
        scanf("%d", &n);
    } while (n < 2);

    printf("Primos de %d a %d.\n", 1, n);

    start = clock();
    lista_primos(n);
    end = clock();

    double duracao = ((double)end - start) / CLOCKS_PER_SEC;
    printf("\nTempo de execução: %f.\n", duracao);

    printf("\n");
    return 0;
}
