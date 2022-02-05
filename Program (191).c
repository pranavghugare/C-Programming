#include<stdio.h>

void Display(char *Brr)
{
	while(*Brr!='\0')
	{
		printf("%c\n",*Brr);
		Brr++;
	}
}

int main()
{
	char Arr[20];
	
	printf("Enter your name\n");
	scanf("%[^'\n']s",Arr);
	
	Display(Arr);
	
	return 0;
}