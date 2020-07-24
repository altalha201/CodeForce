#include<stdio.h>
#include<stdlib.h>

int main()
{
    int k,l,m,n,d,i,sum=0;

    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);

    for(i=1;i<=d;i++)
    {
        if(i%k==0) sum++;
        else if(i%l==0) sum++;
        else if(i%m==0) sum++;
        else if(i%n==0) sum++;
    }
    printf("%d\n",sum);

    return 0;
}
