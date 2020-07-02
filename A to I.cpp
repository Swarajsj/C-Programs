#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int val;
	char str[20];
	
	strcpy(str, "123456789");
	val = atoi(str);
	printf("String value=%s. Int value = %d \n",str,val);
	
	strcpy(str, "Lovely Professional University");
	val = atoi(str);
	printf("String Value = %s, Int Value = %d\n",str,val);
	
	return(0); 
}

