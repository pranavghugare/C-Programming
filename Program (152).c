#include<stdio.h>
int Display(int);
int main()
{
	int iValue=0,iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=Display(iValue);
	printf("%d",iRet);
	return 0;
}

int Display(int iNo)
{
	int iDigit=0;
	int isum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		isum=isum+iDigit;
		iNo=iNo/10;
	}
	return isum;
}