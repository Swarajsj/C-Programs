#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],str1[10],temp;
	int i,j=0;
	printf("Enter the string that u want to reverse \n");
	gets(str);
	strcpy(str1,str);
	i=0;
     j=strlen(str)-1;
	while(i<j)
	{
		
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
		i++;
		j--;
	}
	printf("Reversed string is %s",str);
	if(strcmp(str1,str)==0)
	{
		printf("\nPallindrome");
	}
	else
	{
		printf("\n Not a pallindrome");
	}
}
