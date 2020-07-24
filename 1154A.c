#include<stdio.h>
#include<stdlib.h>

int main()
{
    int x1,x2,x3,x4;
    int a,b,c,temp;

    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    if(x4<x1){temp=x4;x4=x1;x1=temp;}
    if(x4<x2){temp=x4;x4=x2;x2=temp;}
    if(x4<x3){temp=x4;x4=x3;x3=temp;}

    a=(x1-x2+x3)/2;
    b=(x1+x2-x3)/2;
    c=x4-(a+b);

    printf("%d %d %d\n",a,b,c);

    return 0;
}
