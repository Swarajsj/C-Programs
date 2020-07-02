#include<stdio.h>
int main()
{
	int a[5],i,sum=0;
	int *p;
	p=&a[0];
	printf("Enter the values \n");
	for (i=0;i<=4;i++)
	{
		scanf("%d",p+i);
	}
	printf("\n Values are\n");
		for (i=0;i<=4;i++)
	{
		printf("%d\n",*(p+i));
		sum=sum+*(p+i);
	}
	printf("Sum of all elements is %d",sum);
}
