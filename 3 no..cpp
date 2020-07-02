#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a<b)
	{
		if (a<c)
		{
			printf("a is the least");
		}
		else
		{
			printf("c is least");
		}
	}
	else if (b<c)
	{
		printf("b is least");
	}
	else
	{
		printf("c is least");
	}
	
}
