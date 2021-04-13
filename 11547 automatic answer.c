#include <stdio.h>
#include <stdlib.h>

int main()
{
   int t,n,i;

   scanf("%d",&t);
   for( i=1;i<=t;i++)
   {
       scanf("%d",&n);
       n=(n*567)/9;
       n=(n+7492)*235;
       n=(n/47)-498;
       n=n%100;
       n=n/10;
       n=abs(n);
       printf("%d\n",n);


   }
   return 0;
}
