#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,r1,r2,c1,c2;
	printf("Enter rows and col for 1st martix");
	scanf("%d%d",&r1,&c1);
	printf("Enter rows and col for 2nd martix\n");
	scanf("%d%d",&r2,&c2);
	while (c1!=r2)
	{
	printf("Error! col of 1st martix not equal to row of 2nd\n");
	printf("Enter rows and col for 1st martix\n");
	scanf("%d%d",&r1,&c1);
	printf("Enter rows and col for 2nd martix\n");
	scanf("%d%d",&r2,&c2);
	}
	printf("Enter element for 1st martixs \n");
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter element for 2nd martixs \n");
	for (i=0;i<r2;i++)
	{
		for (j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c2;j++)
		{
			int sum=0;
			for (k=0;k<c1;k++)
			{
				sum = sum + a[i][k]*b[k][j];
			}
			c[i][j]=sum;
		}
	}
	printf("Output martixs \n");
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		{
			printf("%d\n",c[i][j]);
		}
		return 0;
	}
}
