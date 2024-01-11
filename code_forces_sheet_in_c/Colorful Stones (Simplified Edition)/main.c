#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

  char s[50];
  char t[50];
  scanf("%s",s);
  scanf("%s",t);
  int i,j;
  for(i=0,j=0;i<strlen(t);i++)
  {
      if(t[i]==s[j])
      {
          j++;
      }
  }
    printf("%d",j+1);

    return 0;
}
