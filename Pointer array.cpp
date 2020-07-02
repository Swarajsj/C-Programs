#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50},i;
	int *p;
	p = &a[0];   //or p=a;
	for(i=0;i<=4;i++)
	{
		printf("%d\n",*(p+i));
	}
}
