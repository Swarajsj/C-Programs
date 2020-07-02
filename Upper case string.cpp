#include<stdio.h>
int main()
{
	char ch[20];
	int i;
	printf("Enter a string to convert it to upper case\n");
	gets(ch);
	for (i=0;ch[i]!='\0';i++)
	{
	  if(ch[i]>='a' && ch[i]<='z')
	  {
	  	ch[i]=ch[i]-32;
	  }
	}
	puts(ch);
}
