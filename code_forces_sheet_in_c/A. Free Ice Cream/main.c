
#include <stdio.h>
#include <stdlib.h>


int main()
{

   int n;
   scanf("%d",&n);
   int dist_kids=0;
    long long int x;
   scanf("%d",&x);
   long long int packs=0;
   packs+=x;


   while(n--)
   {
       char op[2];
       int long long num;
       scanf("%s",&op);
       scanf("%lld",&num);

       switch(op[0])
       {
       case '+':
        packs=packs+num;
        break;
       case '-':
           {
        if(packs>=num){
            packs-=num;
        }
        else
        {
            dist_kids++;
            break;
        }
           }
       }

   }



   printf("%lld %d",packs,dist_kids);

    return 0;
}
