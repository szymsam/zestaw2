#include <stdio.h>

int main() {

    int a;
    scanf("%d",&a);

    int i;
    for (i=1;i<=a;i++){
        if (a%i==0)
            printf("liczba %d jest dzielnikiem %d\n",i,a);
    }
    return 0;
}