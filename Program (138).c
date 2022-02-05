#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UNIT;

bool CheckBit(UNIT iNo){
	
	UNIT iMask=0X00000100;
	UNIT iMask1=0X00000800;
	
	bool flag=false;
	if(((iNo & (iMask | iMask1))==iMask ) || ((iNo & (iMask | iMask1))==iMask1 )){
		flag=true;
	}
	return flag;
}
int main(){
	
	 UNIT iValue=0;
	 bool bRet=false;
	 printf("Enter Number\n");
	 scanf("%d",&iValue);
	 
	 bRet=CheckBit(iValue);
	 if(bRet==true){
		 printf("TRUE");
	 }
	 else{
		printf("FALSE");
	 }
	 
	  return 0;
}