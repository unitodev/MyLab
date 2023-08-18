#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
#include"time.h"
main()
{
	int range;
	srand(time(NULL));
	//rand =(20-10)+1;
	//range =5;
	printf("%d\n",rand()%range+10);
	printf("%d\n",rand()%range+10);
	printf("%d\n",rand()%range+10);
	getch();
}
