#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	char buffer[33];
	printf("Enter a number");
	scanf("%d",&i);
	
	itoa(i,buffer,10);
	printf("Decimal %s \n",buffer);
	
	itoa(i,buffer,16);
	printf("Hexadecimal %s \n",buffer);
	
	itoa(i,buffer,10);
	printf("Binary %s \n",buffer);
	
	return (0);
	
}
