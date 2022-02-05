#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool CheckBit(UNIT iNo,UNIT ipos, UNIT ipos1)
{
	UNIT iMask=0X00000001;
	UNIT iMask1=0X00000001;
	bool flag=false;
	iMask=iMask<<ipos-1;
	iMask1=iMask1<<ipos1-1;
	
	if(((iNo & (iMask | iMask1))==iMask ) || ((iNo & (iMask | iMask1))==iMask1 )){
		flag=true;
	}
	return flag;
}

int main()
{
	UNIT iValue=0;
	UNIT iBit=0,iBit1=0;
	bool bRet=false;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	
	printf("Enter first bit\n");
	scanf("%d",&iBit);

	printf("Enter second bit\n");
	scanf("%d",&iBit1);
	
	bRet=CheckBit(iValue,iBit,iBit1);
	if(bRet==true){
		printf("TRUE");
	}
	else{
		printf("FALSE");
	}
	
	return 0;
}	