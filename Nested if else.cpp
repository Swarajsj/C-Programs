#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if (a<=100)
	{
		if (a>=10)
		{
			if (a%2==0)
			{
				printf("Number is even %d",a);
			}
			else
			{
				printf("Number is odd %d",a);
			}
		}
	}
	else
	{
		printf("Invalid Number");
	}
}
