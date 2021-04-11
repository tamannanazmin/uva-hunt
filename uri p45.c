#include<stdio.h>

int main()
{
    double a,b,c,var;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a<b)
    {
        var = a;
        a = b;
        b = var;

    }
    if(b<c)
    {
        var = b;
        b = c;
        c = var;
    }
    if(a<b)
    {
        var = a;
        a = b;
        b = var;

    }

        if(a>=(b+c))
        {
            printf("NAO FORMA TRIANGULO\n");
        }
        else if(a*a==(b*b)+(c*c))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if((a*a)>(b*b)+(c*c))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if((a*a)<(b*b)+(c*c))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
                if(a==b && b==c)
                {
                printf("TRIANGULO EQUILATERO\n");
                }
                else if((a==b)||(b==c))
                {
                printf("TRIANGULO ISOSCELES\n");
                }

return 0;

}
