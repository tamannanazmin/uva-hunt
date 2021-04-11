#include<stdio.h>

int main()
{
    int n,sum,i,d1,rem1,j;
    for(i=1;;i++)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        else
        {

            while(n!=0)
            {
                sum=0;
                d1=n%10;
                sum=sum+d1;
                rem1=n/10;
                n=rem1;
            }
        }
        printf("%d\n",sum);
    }
}
