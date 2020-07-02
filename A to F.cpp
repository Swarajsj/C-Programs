#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	float val;
	char str[20];
	
	strcpy(str, "123456789");
	val = atof(str);
	printf("String value=%s. Int value = %f \n",str,val);
	
	strcpy(str, "Lovely Professional University");
	val = atof(str);
	printf("String Value = %s, Int Value = %f\n",str,val);
	
	return(0); 
}

