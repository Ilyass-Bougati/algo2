#include <stdio.h>
#include <math.h>

void resoudre(float a, float b, float c);

int main()
{
    float a, b, c;

    do {
        printf("Entrer les valeurs a, b, c : ");
        scanf("%f%f%f", &a, &b, &c);
    } while (a == 0);

    resoudre(a, b, c);
}

void resoudre(float a, float b, float c)
{
    float delta, x1, x2;

    delta = b*b - 4 * a * c;

    if (delta < 0)
    {
        printf("L'equation n'admet pas de sulotion dans IR\n");
    } else if (delta == 0) {
        x1 = - b / (2 * a);
        printf("S = { %.2f }\n", x1);
    } else {
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b - sqrt(delta))/(2*a);
        printf("S = { %.2f, %.2f }\n", x1, x2);
    }

}