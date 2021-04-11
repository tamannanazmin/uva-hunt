#include<stdio.h>

int main()
{
    int i,a,b,j,sum,c;
    for(i=1;;i++)
    {
        scanf("%d",&a);
        if(a<0)
            break;
        else
        {
           for(j=1,sum=1,c=0;j<=a;j++)
        {
            sum=sum*2;
            c++;

        }
        if(sum==a)
            {
                printf("Case %d: %d\n",i,c);
            }
        if(sum>a)
        {
            printf("Case %d: %d\n",i,c);
        }
        }

    }
    return 0;
}
