#include<stdio.h>
#include<math.h>

int main()
{
    int t,n,r,i,x,y;
    double dis,low,hig;
    scanf("%d",&t);
    if(1<=t && 100>=t)
    {
       for(i=1;i<=t;i++)
    {
        scanf("%d%d%d",&x,&y,&r);
        dis=sqrt((x*x)+(y*y));
        low=r-dis;
        hig=r+dis;
        printf("%.2lf ",low);
        printf("%.2lf\n",hig);
    }
    }

    return 0;
}
