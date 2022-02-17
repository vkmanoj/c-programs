#include<stdio.h>
void fun1()
{
	printf("no arguments no return type\n");
}
int fun2()
{
	return 100;
}
int fun3(int a, int b)
{
	printf("with arguments without return type");
}
void fun4(int a, int b)
{
   int c=a+b;
	return c;
}
void main()
{
	int a,b;
	int d=c(12,13);
	printf("\n%d\n",d);
}
