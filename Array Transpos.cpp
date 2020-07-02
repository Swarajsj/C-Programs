#include<stdio.h>
int main()
{
	int a[10][10],t[10][10],i,j,r,c;
	printf("Enter the nos. of rows and cols\n");
	scanf("%d%d",&r,&c);
	printf("Enter the element \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
		printf("Before transpos of matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[j][i]=a[i][j];
		}
	}
	printf("Transpos of martix is \n");
		for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			printf("%d",t[i][j]);
		}
		printf("\n");
	}
}
