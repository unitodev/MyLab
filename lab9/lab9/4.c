#include<stdio.h>
#include<math.h>
float a,b,c,Area;
float read(){
	printf("Input number (cm)");
	scanf("%f",&a);
	printf("Input number (cm)");
	scanf("%f",&b);
}
float RightTriangle(){
	c=pow(a,2)+pow(b,2);
	c=sqrt(c);
	Area=(0.5*(a*b));
}
float output(){
	printf("c = %.2f (m)\n Area = %.2f m",c/100,Area);
}
void main(){

	read();

	RightTriangle();
	output();
	
}
