#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,i,l,d;
    char s[100];

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%s", s);

        l=strlen(s);
        if(l<=10) printf("%s\n",s);
        else
        {
            d=l-2;
            printf("%c%d%c\n",s[0],d,s[l-1]);
        }
    }
    return 0;
}
