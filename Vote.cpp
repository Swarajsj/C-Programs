#include<stdio.h>
int main()
{
	int age;
	printf("Enter the age=\t");
	scanf("%d",&age);
	(age>=18)?printf("\n Person can vote"):printf("\nPerson can not vote");
}
