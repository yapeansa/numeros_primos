#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int n)
{
    if (n > 2)
        for (int i = 2; i < n; i++)
            if (n % i == 0)
                return false;

    return true;
}

void lista_primos(int n)
{
    int count = 0;

    for (int i = 2; i <= n; i++)
        if (eh_primo(i))
        {
            count += 1;
            printf("%d ", i);
            if (count % 10 == 0)
                printf("\n");
        }
}
