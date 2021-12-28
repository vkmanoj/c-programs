#include <stdio.h>
main()
{
    int h,m,s;
    printf("enter secs");
    scanf("%d",&s);
    h=s/3600;
    printf("H:%d",h);
    m=s/60;
    printf(" M:%d",m);
    s=s/1;
    printf(" S:%d\n",s);
    
}