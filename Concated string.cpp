#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char a[20],b[20];
	printf("enter the 1st string \n");
	gets(a);
	printf("enter the 2nd string \n");
	gets(b);
	i=strlen(a);
	for (j=0;b[j]!='\0';i++,j++)
	{
		a[i]=b[j];
	}
	a[i]='\0';
	printf("concated string is %s\n",a);

	
}
