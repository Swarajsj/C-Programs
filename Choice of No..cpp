#include<stdio.h>
int main()
{
int day;
printf("Enter the day");
scanf("%d",&day);

switch (day)
{
	case 1 :
		printf("\n Today is Monday");
		printf("\n We have 4 classes today");
     	break;
	
	case 2 :
		printf("\n Today is Tuesday");
		printf("\n We have 5 classes today");
		break;
		
	case 3 :
		printf("\n Today is Wednessday");
		printf("\n We have 7 classes today");
		break ;
			
	case 4 :
		printf("\n Today is Thursday");
		printf("\n We have 4 classes today");
		break ;
		
	case 5 :
		printf("\n Today is Friday");
		printf("\n We have 5 classes today");
		break ;

	case 6 :
		printf("\n Today is Saturday");
		printf("\n Late night sleep");
		break ;
		
	case 7:
		printf("\n Today is Sunday");
		printf("\n No need to wake up");
		break ;
	
	default :
			printf("Invalid Day");
	
}
}

