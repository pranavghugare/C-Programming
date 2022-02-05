//toggle bit between the position
#include<iostream>

using namespace std;
typedef unsigned int UNIT;
int ToggleRange(UNIT iNo,UNIT iStart,UNIT iEnd){
	/*UNIT iMask2=0Xffffffff,iMask1=0Xffffffff,iMask=0;
	UNIT iReslut=0;
	
	iMask1=iMask1<<(iStart-1);
	iMask2=iMask2>>(32-iEnd);*/
	UNIT iMask=0;
	UNIT iReslut=0;
	iMask=(0Xffffffff<<(iStart-1)) & (0Xffffffff>>(32-iEnd));
	iReslut=iNo ^ iMask;
	return iReslut;
}
int main()
{
	UNIT iValue=0,iRet=0,i=0,j=0;
	cout<<"Enter Number\n";
	cin>>iValue;
	cout<<"Enter Starting Number\n";
	cin>>i;
	cout<<"Enter Ending Number\n";
	cin>>j;
	iRet=ToggleRange(iValue,i,j);
	
	cout<<"Updated Number is:"<<iRet<<"\n";
	return 0;
}