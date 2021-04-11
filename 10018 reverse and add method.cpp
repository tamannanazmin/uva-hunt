#include<stdio.h>

int main()
{
    int n,i;
    long long num,d,rev,k,real,sum,dd,rere,revrev,co,sum2,re3,rev3;
    scanf("%d",&n);
      for(i=0;i<n;i++)
    {
        co=1;
        rev=0;
        scanf("%lld",&num);
        real=num;
        while(num!=0)
        {
        d=num%10;
        rev=(rev*10)+d;
        num=num/10;
        }
        sum=real+rev;
        rere=sum;
        revrev=0;
        while(sum!=0)
        {
        dd=sum%10;
        revrev=(revrev*10)+dd;
        sum=sum/10;
        }
        while(rere!=revrev)
        {
            sum=rere+revrev;
            rere=sum;
            revrev=0;
            while(sum!=0)
        {
        dd=sum%10;
        revrev=(revrev*10)+dd;
        sum=sum/10;
        }
        co=co+1;
        }
        printf("%lld %lld\n",co,revrev);
}

    return 0;
}
