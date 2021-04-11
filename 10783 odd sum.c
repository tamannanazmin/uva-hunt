#include<stdio.h>

int main()
{
    int t,a,b,i,s,j;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d",&a,&b);
        for(j=a,s=0;j<=b;j++)
        {
            if(j%2!=0)
            {
                s=s+j;
            }

        }
         printf("Case %d: %d\n",i,s);
    }
}
