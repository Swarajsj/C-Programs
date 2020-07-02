#include<stdio.h>
struct students
{
	char name[20];
	int age;
	float cgpa;
	
}s1;
int main()
{
	struct students s2;
	scanf("%s%d%f",s1.name,&s1.age,&s1.cgpa);
	printf("\n name is %s\nage is %d\n cgpa is %f",s1.name,s1.age,s1.cgpa);
	s2=s1;
	printf("\nCopied strucure");
	printf("\n name is %s\nage is %d\n cgpa is %f",s2.name,s2.age,s2.cgpa);
	

}
