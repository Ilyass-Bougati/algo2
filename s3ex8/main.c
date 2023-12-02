#include <stdio.h>

int methode1(int a, int b);
int methode2(int a, int b);
int methode3(int a, int b);


int main()
{
    int a, b, ppcm;

    do {
        printf("Entrer les valeurs de a et b : ");
        scanf("%d%d", &a, &b);
    } while (a < 1 || b < 1);

    ppcm = methode3(a, b);

    printf("ppcm(%d, %d) = %d\n", a, b, ppcm);
    
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