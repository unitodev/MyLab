#include<stdio.h>
int array[] = {1,2,10};

int main(){
int i;
for(int i = 1 ; i <= 5 ; i++)

{

int randomIndex = random(0,array.size);

printf("Random number "+i+" : "+array[randomIndex]);

array.remove(randomIndex);

}
}
