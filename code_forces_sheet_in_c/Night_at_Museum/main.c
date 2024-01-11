#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{

  int rotations=0;

  char str[101];
  char Dstr[100]={'a'};
  scanf("%s",&str);
 strcat(Dstr,str);



  for(int i=0;i<strlen(Dstr)-1;i++)
  {
    int D=Dstr[i]-Dstr[i+1];


    if(D<0)
    {
          D=D* -1;
    }

    if(D>12)
    {
        rotations+=(25-D+1);


    }
    else if(D<=12)
    {
        rotations+=D;

    }

  }

  printf("%d",rotations);





    return 0;
}
