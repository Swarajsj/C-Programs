#include<stdio.h>
#include<string.h>
int main()
{
	char a[30],b[30];
	int i;
	printf("\n Enter two strings ");
	gets(a);
	gets(b);
	i=0;
	while (a[i]==b[i] && a[i]!='\0')
	
		i++;
		
		if (a[i]>b[i])
		
			printf(" a>b ");
		
		else if (a[i]<b[i])
		
			printf(" a<b ");
		
		else 
		
			printf(" a==b ");
		
	
}
