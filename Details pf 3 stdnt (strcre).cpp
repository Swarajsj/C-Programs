#include<stdio.h>
struct students
{
	char name[20];
	int age;
	float cgpa;
	
};
int main()
{
	struct students s2[5];
	int i;
	printf("Enter name , age , cgpa\n");
	for (i=0;i<3;i++)
	{
		scanf("%s%d%f",s2[i].name,&s2[i].age,&s2[i].cgpa);
	}
		for (i=0;i<3;i++)
	{
	printf("\n name is %s\nage is %d\n cgpa is %f",s2[i].name,s2[i].age,s2[i].cgpa);
	}

}
