#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
int getoption(void)
{
	int option;
	printf("\t**************************");
	printf("\n\t*	    menu	  		*");
	printf("\n\t*	    1.ADD	  		*");
	printf("\n\t*	    2.SUBTRACT		*");
	printf("\n\t*	    3.MULIPLY	  	*")	;	
	printf("\n\t*	    4.DIVIDE	 	*")	;
	printf("\n\t**************************");	
	
	printf("\n\nPlease type your choice");
	printf("and key return");
	scanf("%d",&option);
	return option;				
		
}
void getdata(int* a,int* b)
{
	printf("please enter two integer numbers");
	scanf("%d %d",a,b);
	
}
float add(int a, int b)
{

float sum;
sum=a+b;
return sum;
}
float sub(int a, int b)
{
	float dif;
	dif=a-b;
	printf("**in sub result is %6.2f\n",dif);
	return dif;
	
}
float calc(int option,int num1,int num2)
{
	float result;
	switch(option)
	{
		case 1:result=add(num1,num2);
		break;
		case 2:result=sub(num1,num2);
		break;
		case 3:result=3.0;
		break;
		case 4: if(num2==0.0)
			{
			printf("\n\a\aERROR");
			printf("division by aero ***\n");
			exit(100);
			
			}
			else
			result=4.0;
		
		default: printf("\aoption not available");
			exit(101);
		
	}
	printf("**in calc result is %6.2f\n",result);
	return result;
}
main()
{int option;
int num1,num2;
float result;
option=getoption();
getdata(&num1,&num2);
result=calc(option,num1,num2);

printf("**in main result is %6.2f\n",result);
getch();
}

	

