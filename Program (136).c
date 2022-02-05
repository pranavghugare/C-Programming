#include<stdio.h>
typedef unsigned int UNIT;

UNIT CountBit(UNIT iNo)
{
	UNIT iMask=0X00000001;
	UNIT iAns=0;
	UNIT iCnt=0;
	for(int i=0;i<31;i++){
		iAns=iNo & iMask;
		if(iAns==iMask)
		{
			iCnt++;
		}
		iMask=iMask<<1;
	}
	//printf("%d\n",sizeof(iMask));
	return iCnt;
}

int main()
{
	UNIT iValue=0;
	UNIT iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=CountBit(iValue);
	printf("%d",iRet);
}