#include<stdio.h>
int main()
{
	int a[10],pos,i;
	printf("enter array elements \n");
	for (i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
		for (i=0;i<=9;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n enter the pos that u want to del\n");
	scanf("%d",&pos);
		for (i=pos-1;i<9;i++)
	{
		a[i]=a[i+1];
	}
	printf(" \n after deletion \n");
		for (i=0;i<9;i++)
	{
		printf("%d",a[i]);
	}
}
