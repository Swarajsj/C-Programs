#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char a[10];
	char b[10];
	printf("Enter the  1st string\n");
	gets(a);
	printf("Enter the 2nd string\n");
	gets(b);
	for(i=0;a[i]!='\0'-1;i++)
	{
		b[i]=a[i];
	}
    puts(b);
}
