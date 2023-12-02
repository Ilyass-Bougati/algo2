#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i, j, k;
    bool premier;

    do {
        printf("Entrer un nombre n : ");
        scanf("%d", &n);
    } while (n <= 1);

    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            j = n;
            pas_premier:
            for (k = 2; k <= j/2; k++)
            {
                if (j % k == 0)
                {
                    j++;
                    goto pas_premier;
                }
            }

            printf("%d n'est pas premier, mais %d est premier\n", n, j);
            return 0;
        }
    }

    for (i = 2; i <= n; i++)
    {
        premier = true; 
        for (j = 2; j <= i/2; j++)
        {   
            if (i % j == 0)
            {
                premier = false;
            }
        }

        if (premier)
        {
            printf("%d est premier\n", i);
        }
    }


}