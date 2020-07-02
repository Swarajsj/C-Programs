#include<stdio.h>
int main()
{
	int a[10]={2,6,4,8,10,12,29,68,45,37};
	int pass, temp,i;
	printf("Data item in oridinal order\n");
	for(i=0;i<10;++i)
	{
		printf("%d\t",a[i]);
	}
	for(pass=1;pass<10;pass++)
	{
		for(i=0;i<10-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
		}
	}
	printf("\nData item in acending order\n");
	for(i=0;i<10;i++)
	{
		printf("\n%d",a[i]);
	}
}
