#include<stdio.h>
int a=20;
void func1(int a){
	int x ;
	x=a*2;
	printf("\n2.x=%d,a=%d",x,a);
	
}
int func2(){
	int x;
	printf("\n4.x=%d,a=%d",x,a);
	x=a*5;
	printf("\n5.x=%d,a=%d",x,a);
	return(x);
}
void main(){
	int x=5;
	printf("\n1.x=%d,a=%d",x,a);
	func1(x);
	printf("\n3.x=%d,a=%d",x,a);
	x=func2();
	printf("\n6.x=%d,a=%d",x,a);
}
