#include<stdio.h>
#include<ctype.h>
void main()
{
	char ch1='A';
	char ch2='k';
	/*ture : return not 0 , false : return 0*/
	printf("Is '%c' lowecase ? Y,(return %d)\n",ch1,islower(ch1));
	printf("Is '%c' uppercasr ? N,(return %d)\n",ch1,isupper(ch1));
	printf("\n");
	printf("Character : %c, %c\n",ch1,ch2);
	printf("Lowercase : %c, %c\n",tolower(ch1),tolower(ch2));
	printf("Uppercase : %c, %c\n",toupper(ch1),toupper(ch2));
}
