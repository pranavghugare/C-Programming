#include<stdio.h>
#include<stdbool.h>
char SmallToCapital(char str)
{
	if((str>='a') && (str<='z'))	//  if((str>='a') && (str<='z'))
	{
		return str-32;
	}
	
}
int main()
{
	char ch='\0',cRet='\0';
	printf("Enter Character\n");
	scanf("%c",&ch);
	
	cRet=SmallToCapital(ch);
	{
		printf("Capital Letter is :%c\n",cRet);
	}
	return 0;
}