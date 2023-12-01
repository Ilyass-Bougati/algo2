#include <stdio.h>

int main()
{
    int i, j, n1, n2;

    do {
        printf("Entrer n1 et n2 : ");
        scanf("%d%d", &n1, &n2);
    } while (n1 <= 0 || n2 <= n1);
    
    for (i = n1; i <= n2; i++)
    {
        for (j = n1; j <= n2; j++)
        {
            if (i != j)
            {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}