
#include <stdio.h>
#include <math.h>

    int main()
    {
        float a,b,c,d;
        printf("podaj a,b,c: ");
        scanf("%f %f %f",&a,&b,&c);
        d=b*b-(4*a*c);
        if(d>0)
        {
            float x1;
            x1 = (-b + sqrt(d)) / 2 * a;
            float x2;
            x2 = (-b - sqrt(d)) / 2 * a;
            printf("miejsce zerowe x1 to: %f \n miejsce zerowe x2 to: %f ",x1,x2);
        }
        else
        {
            d=0;
            float x=-b/2*a;
            printf("%f",x);
        }

    return 0;
}