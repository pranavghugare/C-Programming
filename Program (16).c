#include<stdio.h>

void DisplayEveFact(int);

int main()
{
	int iNo;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	DisplayEveFact(iNo);
	return 0;
}

void DisplayEveFact(int iValue)
{
	int iCnt=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	for(iCnt=1;iCnt<=iValue/2;iCnt++)
	{
		if(iValue%iCnt==0 && iCnt%2==0)
		{
				printf("%d\n",iCnt);	
				
		}
	}
}