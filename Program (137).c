#include<stdio.h>

typedef unsigned int UNIT;

void CountBit(UNIT iNo, UNIT iNo1){
	
	UNIT iMask=0X00000001;
	
	for(int i=1;i<32;i++){
		if(((iNo & iMask)==iMask) && ((iNo1 & iMask)==iMask)){
			printf("%d\n",i);
		}
		iMask=iMask<<1;
	}	
}
int main(){
	UNIT iValue1=0,iValue=0;
	UNIT iRet=0;
	
	printf("Enter First Number\n");
	scanf("%d",&iValue);
	
	printf("Enter second Number\n");
	scanf("%d",&iValue1);
	
	CountBit(iValue,iValue1);
		
	return 0;
}