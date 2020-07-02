#include<stdio.h>
struct car
{
	char name[20];
	float price;
	int seats;

	
};
int main()
{
	struct car c1,*p;
	p=&c1;
	printf("\n Enter name , price , no. of seats\n ");
    scanf("%s%f%d",p->name,&p->price,&p->seats);
	printf("\n name is %s\n price is %f\n no. of seats  is %d",p->name,p->price,p->seats);


}
