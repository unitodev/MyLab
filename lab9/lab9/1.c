#include<stdio.h>
float InputFloat(){
	float x;

	printf("\nInput real value : ");
	scanf("%f",&x);
	return(x);
}
float SumFloat (float x,float y) {
	return(x+y);
}
void PrintOut (float x ){
	printf("\n Result of sum is : %.2f",x);
}
void main ()
{
	float a1,a2,sumVal;
	a1=InputFloat();
	a2=InputFloat();
	sumVal=SumFloat(a1,a2);
	PrintOut(sumVal);
}
