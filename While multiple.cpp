#include<stdio.h>
int main()
{
	int i;
	printf("Even no.and multiple of 8 from 1 to 100 are");
	scanf("%d",&i);
	
	while (i<=100)
	{
		if (i%2==0&&i%8==0)
		{
			printf("/n %d",i);
		}
	}
}
