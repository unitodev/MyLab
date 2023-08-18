#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
	float x,y,c;

	printf("Enter number X :\n");
	scanf("%f",&x);	
	printf("Enter number Y :\n");
	scanf("%f",&y);
	c=pow(x,2)+pow(y,2);
	printf("Hypotenuse = %.2f",sqrt(c));
}
