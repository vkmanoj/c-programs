#include<stdio.h>
main()
{
	int a,b,area,peri;
	printf("enter the values");
	scanf("%d%d",&a,&b);
	area=a*b;
	peri=2*(a+b);
	printf("\n area of the rect=%d",area);
	printf("\n peri of the rect=%d",peri);
}
