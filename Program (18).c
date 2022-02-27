#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char);
int main()
{
	char cCh='\0';
	bool iRet=false;
	printf("Enter Character\n");
	scanf("%c",&cCh);
	iRet=CheckVowel(cCh);
	if(iRet==true)
	{
		printf("True");
	}
	else
	{
		printf("False");
	}
	return 0;
}

bool CheckVowel(char cChar)
{
	if(cChar=='e'|| cChar=='a'|| cChar=='i'|| cChar=='o'|| cChar=='u')
	{
		return true;
	}
	else
	{
		return false;
	}
}
	