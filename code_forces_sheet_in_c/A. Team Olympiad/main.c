#include <stdio.h>
#include <stdlib.h>


int min(int Num1,int Num2)
{

    return (Num1<Num2)?Num1:Num2;

}


int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];

    int Programming[5001];
    int Maths[5001];
    int PE[5001];

    int Pcount=0,Mcount=0,PEcount=0;

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);

        switch(arr[i])
        {
        case 1:
            Programming[Pcount++]=i;
            break;
        case 2:
            Maths[Mcount++]=i;
            break;
        case 3:
            PE[PEcount++]=i;
            break;
        }

    }

int teams=(min(min(Pcount,Mcount),PEcount));
printf("%d\n",teams);

for(int i=0;i<teams;i++)
{
    printf("%d %d %d\n",Programming[i],Maths[i],PE[i]);
}



    return 0;
}
