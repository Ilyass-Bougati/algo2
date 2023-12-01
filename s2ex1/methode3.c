#include <stdio.h>

int main()
{
    int A, B, Q, R;

    do {
        printf("Entrer A et B : ");
        scanf("%d%d", &A, &B);
    } while (A <= 0 || B <= 0 || A <= B);


    // TODO: rewrite this
    do {
        Q = A / B;
        R = A % B;

        A = B;
        B = R;

    } while (R != 0);

    printf("PGCD = %d\n", A);
}