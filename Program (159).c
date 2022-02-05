#include<stdio.h>
void Display(int);
int main()
{
	int iNo;
	printf("Enter Number to Display its table\n");
	scanf("%d",&iNo);
	
	Display(iNo);
	return 0;
}

void Display(int iValue)
{
	if(iValue==0)
	{
		return ;
	}
	if(iValue<0)
	{
		iValue=-iValue;
	}
	int iCnt=0,iAns=1;
	for(iCnt=1;iCnt<=10;iCnt++)
	{
		iAns=iValue*iCnt;
		printf("%d\n",iAns);
	}
}
