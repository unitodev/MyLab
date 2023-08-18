#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"time.h"
int main()
{
	int range,count,i;
	char f[100];
	printf("Enter Time :");
	scanf("%d",&i);
	srand(time(NULL));
	
	do
	{
	
	range =(20-10)+2;
	range =10;
	printf("Random number %d :%d",count+1,rand()%range);
	printf("%d",rand()%range);
	printf("%d",rand()%range);
	printf("%d",rand()%range);
	printf("%d",rand()%range);
	printf("%d\n",rand()%range);
	count++;
	}
	while(count<i);
	
	getch();
}

