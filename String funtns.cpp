#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf(" Enter the string \n");
	gets(a);
	printf(" Enter  2ndthe string \n");
	gets(b);
	printf("\n Length is %d",strlen(a));
	printf("\n revsred %s",strrev(a));
	printf("\n upper  %s",strupr(a));

	
	
}
