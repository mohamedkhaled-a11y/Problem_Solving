#include <stdio.h>
#include <stdlib.h>

int main()
{

  int N;
  scanf("%d",&N);

  int polman=0;
  int crimes=0;

  for(int i=0;i<N;i++)
  {
      int num;
      scanf("%d",&num);

      if(num==-1)
      {
          if(polman>0)
            polman--;
        else
           crimes++;
      }
      else
      {
          polman+=num;

      }


  }


  printf("%d",crimes);


    return 0;
}
