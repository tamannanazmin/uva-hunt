#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,a,b,c=0,co=0,total;
    scanf("%d%d",&a,&b);
    while(b!=a)
    {
       if(b%2==0)
    {
        b=b/2;
        c++;
    }
    else
    {
        b=(b*3)+1;
        co++;
    }
    }
    total=c+co;
    printf("%d %d %d",a,b,total);


    return 0;
}
