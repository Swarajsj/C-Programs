#include<stdio.h>
int main()
{
	int r; 
	printf("Enter the radius\n");
	scanf("%d",&r);
	if (r<10&&r%2==0)
	{
		printf("\n Circumference of circle is %f",2*3.14*r);
    }
    else 
    {
    	printf("\nInvalid Radius");
	}

}
