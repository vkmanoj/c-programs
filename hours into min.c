#include<stdio.h>
main()
{
	int hours,min;
	printf("enter values");
	scanf("%d%d",&hours,&min);
	min=hours*60+min;
	printf("total minites=%d",min);
}
