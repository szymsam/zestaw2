#include <stdio.h>

int main() {
    int w;
    float a,b;

    do
    {
        printf("Wybierz działanie:\n1.Dodawanie\n2.Odejmowanie\n3.Mnozenie\n4.Dzielenie\n0.Wyjscie\nTwój wybor: ");
        scanf("%d", &w);

        switch (w) {
            case 0:
                break;
            case 1:
                printf("Podaj liczby: ");
                scanf("%f %f", &a, &b);
                printf("%f", a + b);
                break;
            case 2:
                printf("Podaj liczby: ");
                scanf("%f %f", &a, &b);
                printf("%f", a - b);
                break;
            case 3:
                printf("Podaj liczby: ");
                scanf("%f %f", &a, &b);
                printf("%f", a * b);
                break;
            case 4:
                printf("Podaj liczby: ");
                scanf("%f %f", &a, &b);
                printf("%f", a / b);
                break;
        }
        printf("\n");
    }
    while (w!=0);

        return 0;
}