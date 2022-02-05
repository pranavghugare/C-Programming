#include<stdio.h>

int main()
{
	char  Arr[11]="Pranav";
	
	printf("%s\n",&Arr[0]);		//we write & just to give address
	printf("%s\n",&Arr[3]);
	printf("%s\n",&Arr[5]);
	
	printf("%s\n",Arr);		//we write & just to give address
	printf("%s\n",Arr+3);
	printf("%s\n",Arr+5);
	return 0;
}