#include<stdio.h>
struct car 
{
	char name[40];
	int seats;
	float price;
};
int main()
{
		struct students s1;
	
	printf("Enter the name of the car\n");
	gets(s1.name);
		printf("Enter the seats of the car\n");
	scanf("%d",&s1.seat);
		printf("Enter the price of the student\n");
	scanf("%f",&s1.price);
	printf("\n Name of the students is :%s\n",s1.name);
		printf("\n Age of the students is :%d\n",s1.age);
			printf("\n CGPA of the students is :%f\n",s1.cgpa);

}

