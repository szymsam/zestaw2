#include <stdio.h>

int max;

int main() {

    int a;
    int b;
    int c;

    printf("Podaj trzy liczby calkowite: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c) {
        max = a;
        printf("%d", max);
    }
    if (b > a && b > c)
    {
        max = b;
        printf("%d", max);
    }
    if (c > a && c > b)
    {
        max = c;
        printf("%d", max);
    }
    else
        {
            printf("liczby są równe");
        }

    return 0;
}