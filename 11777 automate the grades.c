#include<stdio.h>

int main()
{
    int t,i,tmi,tmii,fin,att,a,b,c,av,total;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d%d%d%d%d%d%d",&tmi,&tmii,&fin,&att,&a,&b,&c);
        if(a>b && a>c && b>c)
            av=(a+b)/2;
        else if(a>=b && a>=c && c>=b)
            av=(a+c)/2;
        else if(b>=a && b>=c && c>=a)
            av=(b+c)/2;
        else if(b>=a && b>=c && a>=c)
            av=(b+a)/2;
        else if(c>=a && c>=b && a>=b)
            av=(c+a)/2;
        else if(c>=a && c>=b && b>=a)
            av=(c+b)/2;
            total=tmi+tmii+fin+att+av;
            if(total>=90)
                printf("Case %d: A\n",i);
            else if(80<=total && 90>total)
                printf("Case %d: B\n",i);
            else if(70<=total && 80>total)
                printf("Case %d: C\n",i);
            else if(60<=total && 70>total)
                printf("Case %d: D\n",i);
            else if(60>total)
                printf("Case %d: F\n",i);
    }
    return 0;
}
