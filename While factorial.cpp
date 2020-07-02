#include<stdio.h>
int main ()
{
	int i=1,n,f=1;
	printf("Enter the no. u want to print\n");
	scanf("%d",&n);
	
	while(i<=n)
	{
	   f=f*i;
	printf("\n factorial of %d!=%d",i,f);
	   i++;
	}
}
