#include<stdio.h>
#include<stdbool.h>

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
	int iSum=0,iCnt=0;
	if(iNumber<0)
	{
		iNumber=-iNumber;
	}
	for(iCnt=1;iCnt<=iNumber/2;iCnt++)
	{
		if(iNumber%iCnt==0)
		{
			iSum=iSum+iCnt;
		}
	}
	if(iSum==iNumber)
	{
		return true;
	}
	else
	{
		return false;
	}
}


