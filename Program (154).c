#include<stdio.h>

int SumEven(int);

int main()
{
	int iNo=0,iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet=SumEven(iNo);
	printf("%d",iRet);
	return 0;
}

int SumEven(int iValue)
{
	int iDigit=0,iSum=0;
	
	if(iValue<0)
	{
		iValue=-iValue;
	}
	while(iValue!=0)
	{
		iDigit=iValue%10;
		if(iDigit%2==0)
		{
			iSum=iSum+iDigit;
		}
		iValue=iValue/10;
	}
	return iSum;
}