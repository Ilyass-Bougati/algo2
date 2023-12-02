#include <stdio.h>

int methode1(int a, int b);
int methode2(int a, int b);
int methode3(int a, int b);
int methode_a(int a, int b, int c);
int methode_b(int a, int b, int c);

int main()
{
    int a, b, c, n, ppcm;

    do {
        printf("Entrer le nombre des entiers (2 ou 3) : ");
        scanf("%d", &n);
    } while (n != 2 && n != 3);

    if (n == 2)
    {
        do {
            printf("Entrer les valeurs de a et b : ");
            scanf("%d%d", &a, &b);
        } while (a < 1 || b < 1);

        ppcm = methode3(a, b);

        printf("ppcm(%d, %d) = %d\n", a, b, ppcm);
    }

    if (n == 3)
    {
        do {
            printf("Entrer les valeurs de a, b et c: ");
            scanf("%d%d%d", &a, &b, &c);
        } while (a < 1 || b < 1);

        ppcm = methode_b(a, b, c);

        printf("ppcm(%d, %d, %d) = %d\n", a, b, c, ppcm);
    }
}


int methode1(int a, int b)
{
    int i, j;

    // itterating over the multiplies of a
    for (i = a; i <= a * b; i += a)
    {
        for (j = b; j <= a * b; j += b)
        {
            if (i == j)
            {
                return i;
            }
        }
    }
}


int methode2(int a, int b)
{

}


int methode3(int a, int b)
{
    int A, B, Q, R;

    A = a;
    B = b;

    do {
        Q = A / B;
        R = A % B;

        A = B;
        B = R;
    } while (R != 0);

    // le pgcd est A

    if (a * b > 0)
    {
        return (a * b)/A;
    } else {
        return -(a * b)/A;
    }

}


int methode_a(int a, int b, int c)
{
    int i, j, k;

    // itterating over the multiplies of a
    for (i = a; i <= a * b * c; i += a)
    {
        for (j = b; j <= a * b * c; j += b)
        {
            for (k = c; k <= a * b * c; k += c)
            {
                if (i == j && j == k)
                {
                    return j;
                }
            }
        }
    }
}


int methode_b(int a, int b, int c)
{
    return methode3(methode3(a, b), c);
}