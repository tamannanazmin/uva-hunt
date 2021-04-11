#include<stdio.h>

int main()
{
    double l,wi,d,we;
    int t,i,count;
    scanf("%d",&t);
    if(1<=t && 300>=t)
    {
        for(i=1,count=0;i<=t;i++)
    {
        scanf("%lf%lf%lf%lf",&l,&wi,&d,&we);

         if(((l<=56 && wi<=45 && d<=25)||(l+wi+d)<=125 )&& we<=7)
         {
             printf("1\n");
             count++;
         }

         else
            printf("0\n");
    }
    printf("%d\n",count);
    }

return 0;
}
