#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"time.h"
int main()
{
	int range[10]={0,1,2,3,4,5,6,7,8,9},count,i;

	printf("Enter Time :");
	scanf("%d",&i);
	srand(time(NULL));
	
	do
	{
	range[10]=range[0+1];
	//range =(20-10)+2;
	//range =10;
	printf("Random number %d :%d",count+1,rand()%range[10]);
	printf("%d",rand()%range[10]);
	printf("%d",rand()%range[10]);
	printf("%d\n",rand()%range[10]);

	count++;
	}
	while(count<i);
	
	getch();
}

