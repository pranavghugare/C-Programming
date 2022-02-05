#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrom(int);

int main()
{
	int iNo=0 ;
	bool iRet=false;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	iRet=CheckPallindrom(iNo);
	if(iRet==true)
	{
		printf("Is a Pallindrome");
	}
	else
	{
		printf("Not a Pallindrome");
	}
	return 0;
}

bool CheckPallindrom(int iValue)
{
	int iDigit=0,iRev=0;
	int iTemp=iValue;
	
	
	while(iValue!=0)
	{
		iDigit=iValue%10;
		iRev=(iRev*10)+iDigit;
		iValue=iValue/10;
	}
	if(iRev==iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}