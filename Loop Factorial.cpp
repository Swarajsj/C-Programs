#include<stdio.h>
int main()
{
	int i,n,f=1;
	printf("Enter the number whose factorial u want to print");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
		printf("\n %d",f);
	}
}
