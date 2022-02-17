#include<stdio.h>
float pro(float a, float b)
{
	float c=a*b;
	return c;
}

void main()
{
	float x,y;
	scanf("%f%f",&x,&y);
	float mul=pro(x,y);
	printf("%.2f",mul);
}
