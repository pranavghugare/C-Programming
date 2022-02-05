///Program to print 5 to 1 on screen./////
//Algorithm
//			START
//				 for loop from 5 to 1 decrimented;
//				 print the loop;
//			STOP
/////////////////////////////////////////

#include<stdio.h>

void Display()
{
	int icnt;
	;
	for(icnt=5; icnt>=1; icnt--)
	{
		printf("%d\n",icnt);
	}
}

int main()
{
	Display();
	return 0;
}	