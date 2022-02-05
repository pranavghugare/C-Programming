#include<stdio.h>

int Reverse(int);

int main()
{
	int iNo=0 ,iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	iRet=Reverse(iNo);
	printf("The Reverse of %d is %d",iNo,iRet);
	return 0;
}

int Reverse(int iValue)
{
	int iDigit=0,iRev=0;
	
	/*if(iValue<0)
	{
		iValue=-iValue;
	}*/
	
	while(iValue!=0)
	{
		iDigit=iValue%10;
		iRev=(iRev*10)+iDigit;
		iValue=iValue/10;
	}
	return iRev;
}