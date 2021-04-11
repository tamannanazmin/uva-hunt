#include<stdio.h>

int main()
{
   int t,i,n,dec,hex,d,bi,x,bidec,dd,b1,k,k2,k3,b2,y,bihex,bi2,d3;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
    scanf("%d",&n);
    dec=n;
    x=0;
    b1=0;
    while(dec!=0)
    {
        d=dec%2;
        if(d==1)
        {
            b1=b1+1;
        }
        x=(x*10)+d;
        dec=dec/2;
    }
    bidec=x;
    bi=0;
    while(bidec!=0)
    {
        dd=bidec%10;
        bi=(bi*10)+dd;
        bidec=bidec/10;
    }
    hex =n;
    b2=0;
    while(hex!=0)
    {
        k=hex%10;
        y=0;
        while(k!=0)
        {
            k2=k%2;
            if(k2==1)
            {
                b2=b2+1;
            }
            y=(y*10)+k2;
            k=k/2;
        }
        bihex=y;
        bi2=0;
        while(bihex!=0)
        {
            d3=bihex%10;
            bi2=(bi2*10)+d3;
            bihex=bihex/10;
        }
        hex=hex/10;
    }
    printf("%d %d\n",b1,b2);

}
return 0;
}
