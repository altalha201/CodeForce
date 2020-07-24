#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,m,c,sm=0,sc=0,i;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&m,&c);

        if(m>c) sm++;
        else if(c>m) sc++;
    }
    if(sm>sc) printf("Mishka\n");
    else if(sc>sm) printf("Chris\n");
    else if(sm==sc) printf("Friendship is magic!^^\n");

    return 0;
}
