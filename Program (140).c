#include<stdio.h>
typedef unsigned int UNIT;

UNIT Toggle(UNIT iNo,UNIT Lower,UNIT Higher)
{
	UNIT iMask=0X00000001;
	for(int iCnt=Lower;iCnt<Higher;iCnt++)
	{
		iMask=iMask<<;
		if((iNo & iMask)==iMask)
		{
			iNo^iMask;
		}
	}
	return iNo;
}
 
int main()
{
	UNIT iValue=0;
	UNIT iBit=0,iBit1=0;
	UNIT iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	printf("Enter Lower Range\n");
	scanf("%d",&iBit);

	printf("Enter Upper Range\n");
	scanf("%d",&iBit1);
	
	iRet=Toggle(iValue,iBit,iBit1);
	
	printf("%d",iRet);
	
	return 0;
}