#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int n,t;

    scanf("%lld",&t);

    for(int i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        if(n<=2) printf("0\n");
        else
        {
            if(n%2!=0)
                printf("%lld\n",n/2);
            else
                printf("%lld\n",(n/2)-1);
        }
    }

    return 0;
}
