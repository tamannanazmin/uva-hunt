#include<stdio.h>

int main()
{
    char na[100000];
    int i,j;
    for(i=1;;i++)
    {
        gets(na);

                if(na[0]=='H' && na[1]=='E' && na[2]=='L' && na[3]=='L' && na[4]=='O')
                    printf("Case %d: ENGLISH\n",i);
                else if(na[0]=='H' && na[1]=='O' && na[2]=='L' && na[3]=='A')
                    printf("Case %d: SPANISH\n",i);
                else if(na[0]=='H' && na[1]=='A'&& na[2]=='L' && na[3]=='L' && na[4]=='O')
                    printf("Case %d: GERMAN\n",i);
                else if(na[0]=='B' && na[1]=='O' && na[2]=='N' && na[3]=='J' && na[4]=='O' && na[5]=='U' && na[6]=='R')
                    printf("Case %d: FRENCH\n",i);
                else if(na[0]=='C' && na[1]=='I' && na[2]=='A' && na[3]=='O')
                    printf("Case %d: ITALIAN\n",i);
                else if(na[0]=='Z' && na[1]=='D' && na[2]=='R' && na[3]=='A' && na[4]=='V' && na[5]=='S' && na[6]=='T' && na[7]=='V'&& na[8]=='U' && na[9]=='J' && na[10]=='T' && na[11]=='E')
                    printf("Case %d: RUSSIAN\n",i);
                else if(na[0]=='#')
                    break;
                else
                    printf("Case %d: UNKNOWN\n",i);


    }
    return 0;
}
