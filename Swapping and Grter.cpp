#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the First num");
	scanf("%d",&a);
	printf("\nEnter the second num");
	scanf("%d",&b);
	printf("Entered no a=%d,b=%d",a,b);
	if (a>10&&b>=100)
	{
	temp=a;
	a=b;
	b=temp;
	printf("\nAfter swapping the no a=%d,b=%d",a,b);
}
else 
{
	printf("Invalid Number");
}
}
