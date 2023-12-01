#include <stdio.h>

int main()
{
    int h, m, s;

    do {
        printf("Entrer les secondes : ");
        scanf("%d", &s);
    } while (s < 0);

    h = s / 3600;
    m = (s % 3600) / 60;
    s = s % 60;

    printf("%dh %dm %ds\n", h, m ,s);
}