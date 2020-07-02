#include<stdio.h>
struct employee
{
	char name[20];
	int uid;
	long int phn;
	
};
int main()
{
	struct employee e[10];
	int i,n,loc=-1;
	printf("Enter name , Uid , Phone No.\n");
	for (i=0;i<3;i++)
	{
		scanf("%s%d%ld",e[i].name,&e[i].uid,&e[i].phn);
	}
		for (i=0;i<3;i++)
	{
	printf("\n name is %s \n uid is %d \n phn is %ld ",e[i].name,e[i].uid,e[i].phn);
	}
printf("\n Enter the emplyoee id that u want to search ");
scanf("%d",&n);
	for (i=0;i<3;i++)
	{
		if (n==e[i].uid)
		{
			loc=i+1;
			break;
		}
	
		if(loc!=-1)
		{
			printf("Employee found at %d \n",i+1);
		}
		else
		{
			printf("Uid not found \n ");
		}
    }

}
