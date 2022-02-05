///
//input  5
//* * * * *
//

#include<stdio.h>

void Display(int);

int main()
{
	int iVlaue=0;
	
	printf("Enter Number\n");
	scanf("%d",&iVlaue);
	
	Display(iVlaue);
	return 0;
}
void Display(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\t");
	}
}