#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,k,i;

    scanf("%d %d",&n,&k);

    for(i=1;i<=k;i++)
    {
        if(n%10==0) n/=10;
        else n--;
    }
    printf("%d\n",n);
    return 0;
}
