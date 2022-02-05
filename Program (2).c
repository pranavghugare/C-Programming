//input :  6
//
//output : a b c d e f
 
#include<stdio.h>
void Dispaly(int);
int main()
{
	int iNo=0;
	printf("Enter Number\n");
	scanf("%d",&iNo);
	Dispaly(iNo);
	return 0;
}

void Dispaly(int iValue)
{
	char Ch='\0';
	int iCnt=0;
	for(iCnt=1,Ch='a';iCnt<=iValue;iCnt++,Ch++)
	{
		printf("%c\t",Ch);
	}
}