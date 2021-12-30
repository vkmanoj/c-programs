#include <stdio.h>
main()
{
	int a,b;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d",a);
	}
	else if(a<b)
	{
		printf("%d",b);
	}
	else
	{
		printf("equal");
	}
}
