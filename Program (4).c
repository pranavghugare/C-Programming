////Program to Divide Two Number/////////////
//Algorithm
//			START
//				 Accept First Number(n1);
//				 Accept second Number(n2);
//				 c=a/b;
//				 printf("c");
//			STOP
/////////////////////////////////////////////

#include<stdio.h>

int Divide(int inum1,int inum2)
{
	int ians=0;
	
	if(inum2==0)
	{
		return -1;
	}
	else
	{
		ians=inum1/inum2;
	}
	return ians;
}

int main()
{
	int iValue,iValue1,iret;
	printf("Enter the First number\n");
	scanf("%d",&iValue);
	printf("Enter the second number\n");
	scanf("%d",&iValue1);
	iret=Divide(iValue,iValue1);
	printf("Division is: %d",iret);
	
	return 0;
}