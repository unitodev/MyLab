#include<stdio.h>
#include<math.h>
float room,color,colorl;
float h,w,l;
float read(){
	printf("Heigth of your room :(ft)");
	scanf("%f",&h);
	printf("width of your room :(ft)");
	scanf("%f",&w);
	printf("length of your room :(ft)");
	scanf("%f",&l);		
}
float roomColorCal(){

	room=((h*l)*2)+(w*l)+((w*h)*2);
	color=room/250;
	colorl=color*3.78541178;
	
}
void main(){
	read();
	roomColorCal();
	printf("use color = %f gallon or %f liter",color,colorl);
	
}
