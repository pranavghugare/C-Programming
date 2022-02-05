#include<stdio.h>
#include<stdbool.h>
bool CheckDigit(char str)
{
	if((str>='0') && (str<='9'))	//  if((str>='a') && (str<='z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	char ch='\0';
	bool bRet=false;
	printf("Enter Character\n");
	scanf("%c",&ch);
	
	bRet=CheckDigit(ch);
	if(bRet==true)
	{
		printf("Character is Digit");
	}
	else
	{
		printf("Character is not Digit");
	}
	return 0;
}