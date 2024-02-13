
#include <stdio.h>
#include <ctype.h> 


void swap(int *x, int *y)
{
    *x=*x - *y;
    *y=*y + *x;
    *x=*y - *x;
}
void main(void)
{

     
     char str[100];
     char arr[100];
     scanf("%s",&str);

     int min_idx;
     for(int i=0;str[i],i+=2)
     {
        min_idx=i;

        for(int j=i+2;str[j];j+=2)
        {
            if(str[j]>str[min_idx])
               min_idx=j;
        }

        swap(&str[min_idx],str[i]);

     }

     printf("%s",str);



}