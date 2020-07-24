#include<stdio.h>

int main()
{
    int t,n,i,j,c=0,d=0;

    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        c=0,d=0;
        scanf("%d",&n);
        int a[n];
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
        }
        for(j=0;j<n;j++)
        {
            if(a[j]%2==0) c=1;
            else d=1;
        }
        if(c+d==1) printf("YES\n");
        else printf("NO\n");
    }

    return 0;
}
