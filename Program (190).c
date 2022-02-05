#include<stdio.h>

void Display(char *Brr)
{
	printf("%c\n",*Brr);
	Brr++;
	printf("%c\n",*Brr);
	Brr++;
	printf("%c\n",*Brr);
	Brr++;
	printf("%c\n",*Brr);
	Brr++;
	printf("%c\n",*Brr);
	Brr++;
}
int main()
{
	char Arr[50];
	
	printf("Enter your Name\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}