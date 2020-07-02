#include<stdio.h>
int main()
{
	int arr[100],i,n;
	printf("enter the size of array\n");
	scanf("%d",&n);
    printf("enter the value of array \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=1;i<=n;i++)
	{
		if (arr[0] < arr[i])
		{
			arr[0]=arr[i];
		}
	}
	printf("\n largest element =%d",arr[0]);
}
	
