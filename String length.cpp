#include<stdio.h>
int main()
{
	int i,count=1;
	char a[100];
	printf("Enter the string\n");
	gets(a);
	for (i=0;a[i]!='\0';i++)
	{
		count++;
	}
	printf("\n  Length of string is %d",count);
}
