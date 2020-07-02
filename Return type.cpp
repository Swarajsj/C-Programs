#include<stdio.h>
int main()
{
	int sum(int a, int b);
	int x,y,z;
	printf("Enter 2 nos.");
	scanf("%d%d",&x,&y);
	z=sum(x,y);
	printf("\n Sum is %d",z);
}
int sum(int a, int b)

{
	return a+b;
}
