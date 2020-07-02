#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number\n");
	scanf("%d",&n);
	printf("\n");
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}

