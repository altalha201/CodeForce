#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i;

    scanf("%d",&n);

    for(i=1;i<n;i++)
    {
        if(i%2==1) printf("I hate that ");
        else printf("I love that ");
    }
    if(n%2==0)printf("I love it\n");
    else printf("I hate it\n");
    return 0;
}
