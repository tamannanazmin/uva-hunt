#include<stdio.h>

int main()
{
    signed int t,a,b,c,i;
    scanf("%d",&t);
    if(1<=t && 19>=t)
    {
      for(i=1;i<=t;i++)

    {
        scanf("%d%d%d",&a,&b,&c);
        if(1000<=a && 10000>=a && 1000<=b && 10000>=b && 1000<=c && 10000>=c )
        {
          if(a>b && a>c && b>c)
            printf("Case %d: %d\n",i,b);
        else if(a>b && a>c && c>b)
            printf("Case %d: %d\n",i,c);
        else if(b>a && b>c && c>a)
            printf("Case %d: %d\n",i,c);
        else if(b>a && b>c && a>c)
            printf("Case %d: %d\n",i,a);
        else if(c>a && c>b && a>b)
            printf("Case %d: %d\n",i,a);
        else if(c>a && c>b && b>a)
            printf("Case %d: %d\n",i,b);
    }
        }

    }




    return 0;
}
