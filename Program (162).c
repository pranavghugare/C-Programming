//
//input 4
//1 * 2 * 3 * 4 *
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
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d\t",iCnt);
	}
}