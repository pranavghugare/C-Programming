#include<stdio.h>

int FactorMulti(int);
int main()
{
	int iNo=0,iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet=FactorMulti(iNo);
	printf("%d",iRet);
	return 0;
}

int FactorMulti(int iValue)
{
	int iCnt=0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	int Multi=1;
	for(iCnt=1;iCnt<=iValue/2;iCnt++)
	{
		if(iValue%iCnt==0)
		{
			Multi=Multi*iCnt;
		}	
	}
	return Multi;
}