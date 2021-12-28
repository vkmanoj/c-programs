#include <stdio.h>
main()
{
    int amt,total;
    printf("enter the amount");
    scanf("%d",&amt);
    total=amt/2000;
    printf("\n2000 notes =%d",total);
    amt=amt%2000;
    total=amt/500;
    printf("\n500 notes =%d",total);
    amt=amt%500;
    total=amt/200;
    printf("\n200 notes =%d",total);
    amt=amt%200;
    total=amt/100;
    printf("\n100 notes =%d",total);
    amt=amt%100;
    total=amt/50;
    printf("\n50 notes =%d",total);
    amt=amt%50;
    total=amt/20;
    printf("\n20 notes =%d",total);
    amt=amt%20;
    total=amt/10;
    printf("\n10 notes =%d",total);
    amt=amt%10;
    total=amt/5;
    printf("\n5 notes =%d",total);
    amt=amt%5;
    total=amt/2;
    printf("\n2 notes =%d",total);
    amt=amt%2;
    total=amt/1;
    printf("\n1 notes =%d\n",total);


}