#include<stdio.h>

int main()
{
    int t,a,b,c,d,e,ac,bc,cc,dc,ec;


       while(scanf("%d%d%d%d%d%d",&t,&a,&b,&c,&d,&e)!=EOF)
    {
        if((1<=t && 4>=t) || (1<=a && 4>=a) || (1<=b && 4>=b) || (1<=c && 4>=c) || (1<=d && 4>=d) || (1<=e && 4>=e))
        {
            ac=0,bc=0,cc=0,dc=0,ec=0;


        if(t==a)
            ac++;
        if(t==b)
            bc++;
        if(t==c)
            cc++;
        if(t==d)
            dc++;
        if(t==e)
            ec++;


        printf("%d\n",ac+bc+cc+dc+ec);
        }

    }



    return 0;
}
