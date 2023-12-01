#include <stdio.h>

int main()
{
    int n, i, j, k, p;
    do {
        printf("Entrer le nombre de des lines : ");
        scanf("%d", &n);
    } while (n < 1);

    for (i = 1; i <= n; i++)
    {
        printf("|\t");
        for (j = 0; j < n - i; j++)
        {
            printf("\t");
        }
        for (j = 1; j <= 2*i - 1; j++)
        {
            p = 1;
            for (k = 0; k < j; k++)
            {
                p *= i;
            }
            printf("%d\t", p);
        }
        for (j = 0; j < n - i; j++)
        {
            printf("\t");
        }
        printf("|\t");

        for (j = 1; j < i; j++)
        {
            printf("\t");
        }

        for (j = 1; j <= 2*(n - i + 1) - 1; j++)
        {
            p = 1;
            for (k = 0; k < j; k++)
            {
                p *= (n - i + 1);
            }
            printf("%d\t", p);
        }

        for (j = 1; j < i; j++)
        {
            printf("\t");
        }
        printf("|");

        printf("\n");
    }
    
}