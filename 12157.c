#include<stdio.h>
int main ()
{
    int i,j,t,n,m;

    scanf("%d",&t);

    for(i=1;i<=t;i++)
    {
        int count1=0,count2=0;
        scanf("%d",&n);

        for(j=1;j<=n;j++)
        {
            scanf("%d",&m);
            count1=count1+((m/30)*10+10);
            count2=count2+((m/60)*15+15);
        }


        if(count1<count2)
        printf("Case %d: Mile %d\n",i,count1);
        else if(count1==count2)
        printf("Case %d: Mile Juice %d\n",i,count1);
        else if(count1>count2)
        printf("Case %d: Juice %d\n",i,count2);

    }
    return 0;
}
