#include<stdio.h>
int main()
{
	int n,rev=0,rem,org;
	printf("enter an integer");
	scanf("%d",&n);
	org=n;
	while(n != 0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n /=10;
		printf("\n Reverse number = %d",rev);
	}
	if(org==rev)
	{
		printf("%d is a palindrone",org);
	}
	else 
	{
		printf("%d is not a palindrone",org);
	}
}
