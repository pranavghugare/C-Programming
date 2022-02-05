#include<stdio.h>
#include<stdbool.h>

int SumFactor(int);
bool CheckPerfect(int);
int main()
{
	int iValue=0;
	bool iPerf=false;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	iPerf=CheckPerfect(iValue);
	if(iPerf==true)
	{
		printf("Is a PerfectNumber");
	}
	else
	{
		printf("Is not a PerfectNumber");
	}
	return 0;
}
bool CheckPerfect(int iNumber)
{
	int iRet=0;
	if(iNumber<0)
	{
		iNumber=-iNumber;
	}
	iRet=SumFactor(iNumber);
	if(iRet==iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int SumFactor(int iNo)
{
	int iSum=0,iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}

