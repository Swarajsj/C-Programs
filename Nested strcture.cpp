#include<stdio.h>
struct dob
{
	int d;
	int m;
	int y;
}var;
struct person 
{
	char name[30];
	struct dob var;
}p1;
int main()
{
	scanf("%s%d%d%d",p1.name,&p1.var.d,&p1.var.m,&p1.var.y);
	printf("\n Name = %s \n dob = %d-%d-%d",p1.name,p1.var.d,p1.var.m,p1.var.y);
}
