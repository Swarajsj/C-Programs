#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	float *ptr;
	ptr = (float*) calloc (5,sizeof(float));
	printf("Enter values\n");
	for(i=0;i<=4;i++)
	{
		scanf("%f",(ptr+i));
	}
		printf("values are\n");
		
	for(i=0;i<=4;i++)
	{
		printf("%f\n",*(ptr+i));
			
	}
}
