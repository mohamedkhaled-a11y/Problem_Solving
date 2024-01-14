

#include <stdio.h>

int main()
{
    int N,m;
    scanf("%d",&N);
    int arr[N];
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&arr[i]);
    }

    scanf("%d",&m);

    while(m)
    {
        int x ,y,L,R;
        scanf("%d",&x);
        scanf("%d",&y);

        L= y-1;
        R= arr[x]-y;

        arr[x-1]+=L;
        arr[x+1]+=R;
        arr[x]=0;


        --m;
    }


    for(int i=1;i<=N;i++)
    {
        printf("%d\n",arr[i]);
    }

return 0;
}
