#include<stdio.h>
int main()
{
	float a=3.14;
	float area,r;
	printf("Enter the value of r=");
	scanf("%f",&r);
	area=(a*r*r);
	printf("Area of the circle is %f",area);
	float cir=2*3.14*r;
	printf("\n\nThe Circumference of the circle is %f",cir);
	
	}
