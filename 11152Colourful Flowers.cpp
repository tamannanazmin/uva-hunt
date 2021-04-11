#include<stdio.h>
#include<math.h>
#define PI 2*acos(0.0)
int main()
{

    double a,b,c,s,at,rc,ac,rb,ab,areab,areat;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {


        s=(a+b+c)/2;
    at=sqrt(s*(s-a)*(s-b)*(s-c));
    rc=at/s;
    ac=PI*rc*rc;
    rb=(a*b*c)/(sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)));
    ab=PI*rb*rb;
    areab=ab-at;
    areat=at-ac;
    printf("%.4lf %.4lf %.4lf\n",areab,areat,ac);


    }

    return 0;


}
