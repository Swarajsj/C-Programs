#include<stdio.h>
int main()
{
	int a[10]={10,20,30,40,50,60,70,80,90,100};
	int loc =-1,beg=0,last=9,mid,key;
	printf("enter interger value to search in stored array");
	scanf("%d",&key);
	while (beg<=last)
 {
	mid = (beg+last)/2;
	
	if (a[mid]==key)
	{
		loc= mid;
		break;
	}
	else if (a[mid]>key)
    {
    	last=mid-1;
	}
	else if (a[mid]<key)
	{
		beg=mid+1;
	} 
  }
	if(loc!= -1)
	{
		printf("element found at %d",loc+1);
	}
	else
	{
		printf("enlemnt not found");
	}
}
