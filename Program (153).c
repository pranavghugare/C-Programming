#include<stdio.h>
int CountDigit(int);
int main()
{
	int iValue=0,iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=CountDigit(iValue);
	printf("Number of Digits are: %d",iRet);
	return 0;
}

int CountDigit(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo==0)
	{
		iCnt++;  //return 1
	}
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
//iDigit=iNo%10;
		//if(iNo%10!=0)
		iCnt++;
		iNo=iNo/10;
	}
	return iCnt;
}