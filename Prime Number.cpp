#include<stdio.h>
int main()
{
	int l,u,x,i;
	printf("Enter Two Number");
	scanf("%d %d",&l,&u);
	
	for(x=1;x<=u-1;x++)
	{
		for (i=2;i<x;i++)
		{
			if (x%i==0)
			break;
		}
		if(i==x)
		{
			printf("\n%d",x);
		}
	}
}
