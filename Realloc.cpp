#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,n,m;
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
	}
	printf("Enter new size\n");
	scanf("%d",&m);
	p=(int*)realloc(p,m*sizeof(int));
	printf("Enter new values\n");
	for(i=n;i<n+m;i++)
	{
		scanf("%d",p+i);
	}
	printf(" \n new values are \n");
	for(i=0;i<n+m;i++)
	{
		printf("%d",*p+i);
	}
	
	
}
