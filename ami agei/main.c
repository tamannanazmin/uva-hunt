#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int n,m,i,ki,f,j, k, l, count = 0;;
  scanf("%d",&n);
  scanf("%d",&m);
  for(i=1;i<=m;i++)
  {
      scanf("%d",&ki);
      for(j=1;j<=ki;j++)
      {
          scanf("%d",&f);
          if(i==j)
            count++;

      }
  }
  if(count = 0)
            printf("NO\n");
        else
            printf("YES\n");
}
