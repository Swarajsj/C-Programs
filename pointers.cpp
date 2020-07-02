#include<stdio.h>
int main()
{
	int a=10;
	float b=5.5;
	void *ptr;
	ptr=&a;
	printf("\nThe values of A is %d ",(*(int*)ptr));
	
	
	ptr= &b;
	printf("\nThe values of B is %f ",(*(float*)ptr));
	
	
	char c='Z';
	ptr= &c;
	printf("\nThe values of C is %c ",(*(char*)ptr));
	
}
