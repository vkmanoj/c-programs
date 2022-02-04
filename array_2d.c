#include<stdio.h>
int main()
{
	int rs,cs;
	printf("enter rows and columns ");
	scanf("%d%d",&rs,&cs);
	int a[rs][cs],i,j;
	printf("enter the elements");
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			printf("  %d  ",a[i][j]);
		}
		printf("  \n");
	}
	
}
