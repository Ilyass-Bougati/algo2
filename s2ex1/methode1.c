#include <stdio.h>

int main()
{

    int n, m, i, j, pgcd;

    do {
        printf("Entrer n et m : ");
        scanf("%d%d", &n, &m);
    } while (n <= 0 || m <= 0);

    pgcd = 1;

    for (i = 2; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            for (j = 2; j <= m/2; j++)
            {
                if ((m % j == 0) && (i == j) && (i > pgcd))
                {
                    pgcd = i;
                }
            }
        }
    }

    printf("PGCD(%d, %d) = %d\n", n, m, pgcd);

}