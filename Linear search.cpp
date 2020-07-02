#include<stdio.h>
int main()
{
	int a[10]={2,6,4,8,10,12,89,68,45,37};
	int i,loc =-1,key;
	printf("enter interger value to search array");
	scanf("%d",&key);
	for(i=0;i<10;i++)
	{
		if(a[i]==key)
		{
			loc=i+1;
			break;
		}
	}
	if(loc!= -1)
	{
		printf("element found at %d",loc);
	}
	else
	{
		printf("enlemnt not found");
	}
}
