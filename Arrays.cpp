#include<stdio.h>
int main()
{
	int i,sum=0,n;
	printf("\nEnter the array size");
	scanf("%d",&n);
	
	int a[n];
	printf("\n Enter the values");
	for (i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
   printf("Entered values are \n");
   
   for (i=0;i<=n;i++)
   {
   	printf("\n %d",a[i]);
   }
   printf("\nEnter the sum of the nos.%d",sum);
}
