#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{

   int arr[4];
   int cal=0;
   for(int i=0;i<4;i++)
   {
       scanf("%d",&arr[i]);
   }

   char str[100000];
   scanf("%s",&str);
   int len=strlen(str);


   for(int i=0;i<len;i++)
   {
       int result=0;
       result = result * 10 + ( str[i] - '0' );
       cal+=arr[result-1];
   }
   printf("%d",cal);

    return 0;
}
