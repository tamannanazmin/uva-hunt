#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,i,c,temp,j;
    for(i=1;i<=201;i++)
    {
        scanf("%d%d",&a,&b);
        if(a==0 && b==0)
            break;
        else
        {
            for(j=a,c=0;j<=b;j++)
            {
                temp=sqrt(j);
                if(j==temp*temp)
                {
                    c++;
                }
            }
            printf("%d\n",c);
        }
    }
    return 0;
}
