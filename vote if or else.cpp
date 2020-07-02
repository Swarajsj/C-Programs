#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age");
	scanf("%d",age);
	if (age>=18)
	{
		printf("Person can vote");
	}
	else
	{
		printf("Person can not vote");
	}
}
