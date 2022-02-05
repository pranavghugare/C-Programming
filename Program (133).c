#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

int OffBit(UINT iNo,UINT iPos)
{
	UINT iMask=0x00000001;
	if(iPos<1 || iPos>32)
	{
		return -1;
	}
	iMask=iMask<<iPos-1;
	if((iNo&iMask)!=iMask)
	{
		return iNo^iMask;
	}
	return -1;
}
	
int main()
{
	UINT iValue=0;
	UINT iBit=0;
	UINT iRet=false;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	printf("Enter Bit Number\n");
	scanf("%d",&iBit);
	
	iRet=OffBit(iValue,iBit);
	if(iRet>=0){
		printf("%d",iRet);
	}
	else
	{
		printf("bit is OFF");
	}
	return 0;
}