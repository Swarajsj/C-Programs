#include<stdio.h>
int main()
{
	int a[5];
	int i,loc=-1,key,*p;
	p=&a[0];
	printf("Enter the values of array");
	for(i=0;i<=4;i++)
	{
		scanf("%d",p+i);
	}
	printf("\n Enter valaue to search");
	scanf("%d",&key);
	for(i=0;i<=4;i++)
	{
		if (*(p+i)==key)
		{
			loc = i+1;
			break;
		}
	}
	if(loc!=-1)
	{
		printf("\nElement found at %d",i+1);
	}
	else 
	{
		printf("Element not found \n");
	}
}
