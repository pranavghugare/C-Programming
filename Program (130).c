#include<stdio.h>

typedef unsigned int UINT;

int CheckBit(UINT iNo)
{
	UINT iMask=0X0000000f;
	if((iNo^iNo)==iMask)
	{
		return iNo&iMask;
	}
	return -1;
}
int main()
{
	UINT value=0;
	int iRet=0;
	printf("Enter Number\n");
	scanf("%d",&value);
	iRet=CheckBit(value);
	if(iRet>=0)
	{
		printf("The new value after the bit is Toggle is %d\n",iRet);
	}
	else
	{
		printf("bits are OFF\n");
	}
	return 0;
}