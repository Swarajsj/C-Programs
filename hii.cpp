#include<stdio.h>
#define SIZE 10
void read(int*);
int countavg(int *g);
int main()
{
	int g[SIZE];
	read(g);
	printf("The avg is %d\n",countavg(g));
	
}
void read(int *g)
{
	int i,temp;
	for (i=0;i<SIZE;i++)
	{
		printf("Element are \n",i);
		scanf("%d",&temp);
		g[i]=temp;
	}
}
int countavg(int * g)
{
	int i,total=0;
	for(i=0;i<SIZE;i++)
	total+=g[i];
	return(total/SIZE);
}
