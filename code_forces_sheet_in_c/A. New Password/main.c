#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        printf("%c", 'a'+(i%k));
    }

    return 0;
}


