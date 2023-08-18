#include<stdio.h>
#include<math.h>
	int a,b;
float read(){

	printf("Input your number :");
	scanf("%d",&a);
	return(a);
}
float diff(float x,float y){
float z;
	if(x>y)
	{
	z=x-y;	
	printf("Result = %.2f",z);
	return(x+y);
}
	else
	z=y-x;
	printf("Result = %.2f",z);	
	return(x-y);
	
}


void main()
{float i1,i2,logic;
i1=read();
i2=read();

logic=diff(i1,i2);


getch();
	
}
