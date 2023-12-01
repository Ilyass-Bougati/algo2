#include <stdio.h>

int main()
{
    int A, B;

    do {
        printf("Entrer A et B : ");
        scanf("%d%d", &A, &B);
    } while (A <= 0 || B <= 0);

    while (A != B)
    {
        if (A > B)
        {
            A -= B;
        } else {
            B -= A;
        }
    }

    printf("PGCD = %d\n", A);
}