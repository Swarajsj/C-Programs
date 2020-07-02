#include<stdio.h>
int sum(int a[])
{
	int x,y=0;
	for(x=0;x<=9;x++)
	{
		y=y+a[x];
	}
	return y ;
}

	int main()
{
	int a[10],i,s;
	printf("Enter the values \n");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	s = sum(a);
	printf("\n Sum is %d",s);
	
}

