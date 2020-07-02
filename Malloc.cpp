#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n,sum=0;
	printf("Enter the size\n");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("Enter values\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
		printf("values are\n");
		
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
		sum=sum + *(p+i);	
	}
	printf("Sum is %d\n",sum);
}
