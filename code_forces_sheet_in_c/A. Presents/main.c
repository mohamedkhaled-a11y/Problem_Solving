#include <stdio.h>
#include <stdlib.h>


int main()
{

   int n;
   scanf("%d",&n);
   int arr[n];
   for(int k=0;k<n;k++)
   {
        scanf("%d",&arr[k]);
   }

   for(int i=1;i<=n;i++)
   {
       for(int j=0;j<n;j++)
       {
           if(arr[j]==i)
              printf("%d ",j+1);
       }
   }



    return 0;
}
