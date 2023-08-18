#include<stdio.h>
#include<conio.h>
void main()
{
	float f;
	char s[21];
	int i;
	//clrscr();
	printf("Enter number : ");
//	scanf("%f",&f);
	sprintf(s,"%.0f",f);
	i=atoi(s);
	printf("Integer number is %d", i);
	getch();
	
}
