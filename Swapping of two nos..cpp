#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("Enter the value of x=\t&y=");
	scanf("%d%d",&x,&y);
	printf("\n Value before swapping is x=%d,y=%d",x,y);
	temp=x;
	x=y;
	y=temp;
	printf("\n Value After swapping is x=%d,y=%d",x,y);
	(x>y)?printf("\nx=%d is greater",x):printf("\n y=%d is greater",y);
}
