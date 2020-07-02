#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("Enter the values in martix\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("enter at a[%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf(" values in martix are\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf(" %d ",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
	}
	printf("\n Sum of all elements is %d",sum);
}


