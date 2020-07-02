#include<stdio.h>
union student
{
	char name[20];
	int roll;
	float cgpa;
}s1;
int main()
{
	union student s1;
	scanf("%s",s1.name);
	printf("\n%s",s1.name);
	scanf("%d",&s1.roll);
	printf("\n%d",s1.roll);
	scanf("%f",&s1.cgpa);
	printf("\n%f",s1.cgpa);
}
