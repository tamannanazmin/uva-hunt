#include<stdio.h>

int main()
{
    int t,i,j,n,a[1000];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        for(j=1;j<=n;j++)
        {
            scanf("%d",&a[j]);


        }
        printf("Case %d: %d\n",i,a[j/2]);
    }
    return 0;
}
