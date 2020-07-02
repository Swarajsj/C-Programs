#include<stdio.h>
int main()
{
	int a[50],n,pos,i,value;
	printf("enter the size of array \n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n enter position");
	scanf("%d",&pos);
	printf("\n enter value");
	scanf("%d",&value);
		for (i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=value;
	printf(" \n after insertion \n");
		for (i=0;i<=n;i++)
	{
		printf(" %d ",a[i]);
	}
}
