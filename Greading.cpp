#include<stdio.h>
int main()
{
	int mark;
	printf("Enter your mark=");
	scanf("%d",&mark);
	if (mark>=90)
	{
		printf("\n The gread is O");
	}
	else if (mark>=80)
	{
		printf("\n The gread is A+");
	}
	else if (mark>=70)
	{
		printf("\n The greAD is B");
	}
	else if (mark>=60)
	{
		printf("\n The gread is C");
	}
	else if (mark>=50)
	{
		printf("\n The gread is D");
	}
	else
	{
		printf("\n You are fail");
	}
}
