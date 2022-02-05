#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char str)
{
	if((str>=65) && (str<=90))
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
	
	bRet=CheckCapital(ch);
	if(bRet==true)
	{
		printf("Character is Capital");
	}
	else
	{
		printf("Character is not Capital");
	}
	return 0;
}