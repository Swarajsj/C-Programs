#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	long val;
	char str[20];
	
	strcpy(str, "123456789");
	val = atol(str);
	printf("String value=%s. Int value = %ld \n",str,val);
	
	strcpy(str, "Lovely Professional University");
	val = atol(str);
	printf("String Value = %s, Int Value = %ld \n",str,val);
	
	return(0); 
}

