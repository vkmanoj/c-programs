#include <stdio.h>
main()
{
    int x,y,n,a,l,ap;
    printf("enter the values of x,y");
    scanf("%d%d",&x,&y);
    n=y/x;
    a=x;
    l=n*a;
    ap=n*(a+l)/2;
    printf("arith prog=%d\n",ap);
}