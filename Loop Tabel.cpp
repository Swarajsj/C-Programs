#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter the number whose tabel you want to print\n");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
		printf("\n%d*%d=%d",n,i,i*n);
	}
}
