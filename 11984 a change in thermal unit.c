#include<stdio.h>

int main()
{
    int t,i;
    double c,d,f,to,newc;
    scanf("%d",&t);
    if(1<=t && 100>=t)
    {
       for(i=1;i<=t;i++)
    {
        scanf("%lf%lf",&c,&d);

        f=((9*c)/5)+32;
        to=f+d;
        newc=((to-32)*5)/9;
        printf("Case %d: %.2lf\n",i,newc);
    }
    }

    return 0;
}
