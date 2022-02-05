#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT iNo,UINT iPos)
{
	UINT iMask=0x00000001;
	if(iPos<1 || iPos>32)
	{
		return false;
	}
	iMask=iMask<<iPos-1;
	if((iNo&iMask)==iMask)
	{
		return true;
	}
	return false;
}
	
int main()
{
	UINT iValue=0;
	UINT iBit=0;
	bool bRet=false;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	printf("Enter Bit Number\n");
	scanf("%d",&iBit);
	
	bRet=CheckBit(iValue,iBit);
	if(bRet==true){
		printf("TRUE");
	}
	else
		printf("FALSE");
	return 0;
}