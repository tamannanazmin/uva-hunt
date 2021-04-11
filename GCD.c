
#include<stdio.h>

int main()
{

    int n,i,j,g,k,gcd;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            break;
        }
        else
        {
          g=0;
        for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
        {

        for(k=1;k<=i&&k<=j;++k)
        {
            if(i%k==0 && j%k==0)
            gcd=i;
        }
        g+=gcd;
        }
        printf("%d\n",g);
        }

       }
       return 0;
}
