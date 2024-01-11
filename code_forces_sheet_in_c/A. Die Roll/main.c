
#include <stdio.h>
#include <stdlib.h>

int main()
{

   unsigned short int Y,W,N,D;
   scanf("%hd",&Y);
   scanf("%hd",&W);
   N=(Y>W)?Y:W;
   N=6-N+1;

   switch(N)
   {
   case 0:
    printf("0/1");
    break;
  case 1:
    printf("1/6");
    break;
  case 2:
    printf("1/3");
    break;
  case 3:
    printf("1/2");
    break;
  case 4:
    printf("2/3");
    break;
  case 5:
    printf("5/6");
    break;
  case 6:
    printf("1/1");
    break;
   }



    return 0;
}
