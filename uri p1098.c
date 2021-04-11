#include<stdio.h>

int main()
{
    double i,j;
    for(i=0;i<=2;i=i+0.2)
    {
        for(j=1+i;j<=(3+i);j=j+1)
            printf("I=%.1f J=%.1f\n",i,j);
    }
    return 0;
}
