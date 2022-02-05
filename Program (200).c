#include<stdio.h>
#include<stdbool.h>
char CapitalToSmall(char str)
{
	if((str>='A') && (str<='Z'))	//  if((str>='a') && (str<='z'))
	{
		return str+32;
	}
}
int main()
{
	char ch='\0',cRet='\0';
	printf("Enter Character\n");
	scanf("%c",&ch);
	
	cRet=CapitalToSmall(ch);
	{
		printf("Capital Letter is :%c\n",cRet);
	}
	return 0;
}