#include <stdio.h>

int pgcd(int n, int m)
{
    int Q, R;

    if (m > n)
    {
        int temp;

        temp = n;
        n = m;
        m = temp;
    }

    do {
        Q = n / m;
        R = n % m;

        n = m;
        m = R;

    } while (R != 0);

    return n;
}

// TODO: need testing
int main()
{
    int P, n, J, i, j, k, IPJ;

    do {
        printf("Entrer n et J: ");
        scanf("%d%d", &n, &J);
    } while (n <= 1);

    P = 1;
    for (i = 1; i <= n; i++)
    {
        IPJ = 1;
        for (j = 0; j < J; j++)
        {
            IPJ *= i;
        }

        P *= IPJ/pgcd(i, j);

    }

    printf("P = %d\n", P);

}