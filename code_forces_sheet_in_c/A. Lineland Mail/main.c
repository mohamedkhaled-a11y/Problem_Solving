#include <stdio.h>
#include <stdlib.h>

#define MAX(x, y) (x > y ? x : y)
#define MIN(x, y) (x < y ? x : y)

int main()
{

int n,min,max;
scanf("%d",&n);

int Arr[n];
for(int i=0;i<n;i++)
{
    scanf("%d",&Arr[i]);
}

min=Arr[1]-Arr[0];
max=Arr[n-1]-Arr[0];

printf("%d %d\n",min,max);

for(int i=1;i<n;i++)
{
    if(i==n-1)
    {
   min =abs((Arr[i])-(Arr[i-1]));
   max =MAX(abs(Arr[n-1]-Arr[i]),abs(Arr[i]-Arr[0]));
   printf("%d %d\n",min,max);
    }

  else {
   min =MIN(abs(Arr[i+1]-Arr[i]),abs(Arr[i]-Arr[i-1]));
   max =MAX(abs(Arr[n-1]-Arr[i]),abs(Arr[i]-Arr[0]));
   printf("%d %d\n",min,max);
  }
}


    return 0;
}
