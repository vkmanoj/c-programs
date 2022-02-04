#include<stdio.h>
int main()
{
	int rs,cs;
	printf("enter the rows and columns");
	scanf("%d%d",&rs,&cs);
	int a[rs][cs],i,j,row_sum;
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
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<rs;i++)
	{
		for(j=0;j<cs;j++)
		{
			row_sum=0;
			row_sum=row_sum+a[i][j];
		}
	}
	printf("sum of row = %d",row_sum);

}
