#include <stdio.h>
#include <stdlib.h>


int main()
{

   unsigned int K ,r;

   scanf("%d",&K);
   scanf("%d",&r);
   unsigned int i=1;
   unsigned int mod=0;
   for(i=1;i<100000;i++)
   {

       mod = (i*K)%10;

       if(mod==r || (mod%10==0))
       {
           break;
       }
   }
   printf("%d",i);



    return 0;
}
