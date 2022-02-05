#include<stdio.h>

typedef unsigned int UINT;

int ToggleFirstLast(UINT iNo)
{
	int iMask1=0X80000001;
	if((iNo&iMask1)==iMask1)
	{
		return iNo^iMask1;
	}
	return -1;
}
int main()
{
	UINT iValue=0;
	UINT iBit1=0;
	UINT iBit2=0;
	UINT iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	iRet=ToggleFirstLast(iValue);
	if(iRet>=0)
	printf("%d",iRet);
	
	return 0;
}