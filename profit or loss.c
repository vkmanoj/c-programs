#include <stdio.h>
main()
{
	int bp,sp;
	printf("enter the bp and sp\n");
	scanf("%d%d",&bp,&sp);
	if(bp>sp)
	{
	printf("loss");          
	}
	else if(bp<sp)
	{
		printf("profit");
	}
	else
	{
		printf("no profit no loss");
	}
}
