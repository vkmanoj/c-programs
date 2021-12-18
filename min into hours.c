#include<stdio.h>
main()
{
	int hour,minites;
	printf("enter minites");
	scanf("%d",&minites);
	hour=minites/60;
	minites=minites%60;
	printf("\n hour =%d",hour);
	printf("\n minites =%d",minites);
}
