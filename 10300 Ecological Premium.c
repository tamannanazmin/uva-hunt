#include<stdio.h>

int main()
{
    int n,i,far,a,b,c,sum,to,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&far);
        for(j=1,sum=0;j<=far;j++)
        {

            scanf("%d%d%d",&a,&b,&c);
            to=a*c;
            sum=sum+to;

        }
            printf("%d\n",sum);
    }

    return 0;
}
