#include<stdio.h>
int Power(int,int);
int main()
{
	int iNo=0,iNo2=0,iRet=0;
	printf("Enter first Number\n");
	scanf("%d",&iNo);
	printf("Enter power \n");
	scanf("%d",&iNo2);
	
	iRet=Power(iNo,iNo2);
	printf("Power of %d is:%d\n",iNo,iRet);
	return 0;
}

int Power(int iValue,int iValue2)
{
	/*if(iValue<0)      it is not mandatory to update
	{
		iValue=-iValue;
	}*/
	if(iValue2<0)
	{
		iValue2=-iValue2;
	}
	int iCnt=0,iPower=1;
	/*for(iCnt=1;iCnt<=iValue2;iCnt++)
	{
		iPower=iPower*iValue;
	}*/
	while(iValue2!=0)
	{
		iPower=iPower*iValue;
		iValue2--;
	}
	return iPower;
}