//
//input 5
//2 4 6 8 10
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
	for(iCnt=1;iCnt<=5;iCnt++)
	{
		printf("%d\t",2*iCnt);
	}
}