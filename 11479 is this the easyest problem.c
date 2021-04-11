#include<stdio.h>

int main()
{
    signed long int t,a,b,c,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%li%li%li",&a,&b,&c);
        if(a>=b && a>=c && b+c>a)
        {
                if(a==b && b==c && c==a)
                    printf("Case %d: Equilateral\n",i);
                else if(a==b || b==c || c==a)
                    printf("Case %d: Isosceles\n",i);
                else
                    printf("Case %d: Scalene\n",i);
        }
        else if(b>=a && b>=c && a+c>b)
        {
                if(a==b && b==c && c==a)
                    printf("Case %d: Equilateral\n",i);
                else if(a==b || b==c || c==a)
                    printf("Case %d: Isosceles\n",i);
                else
                    printf("Case %d: Scalene\n",i);
        }
        else if(c>=a && c>=b && a+b>c)
        {
                if(a==b && b==c && c==a)
                    printf("Case %d: Equilateral\n",i);
                else if(a==b || b==c || c==a)
                    printf("Case %d: Isosceles\n",i);
                else
                    printf("Case %d: Scalene\n",i);
        }
        else
            printf("Case %d: Invalid\n",i);


    }
    return 0;
}
