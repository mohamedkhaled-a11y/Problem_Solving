#include <stdio.h>
#include <stdlib.h>

int main()
{

 int N;
   scanf("%d",&N);
   char str[N];
   scanf("%s",str);

  int count=0;
  int i=0,j=i+1;

  while(j<N)
  {
      if(str[i]==str[j])
      {
          count++;
      }
      i++;
      j++;
  }
printf("%d",count);




    return 0;
}
