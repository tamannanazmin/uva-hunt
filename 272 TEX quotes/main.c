#include <stdio.h>
#include<string.h>


int main()
{
    char line[1000];
    long i,a=0;;
    while(gets(line))
    {
       for(i=0;line[i]!='\0';i++)
       {
           if(line[i]=='"')
           {
                a=a+1;
                if(a%2==1)
                {
                    printf("``");
                }
                else
                    printf("''");
           }
           else
            printf("%c",line[i]);
       }
   printf("\n");
    }
    return 0;
}
