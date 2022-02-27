#include<stdio.h>
void DisplayCharacter(char);
int main()
{
	char cChar='\0';
	printf("Enter Character\n");
	scanf("%c",&cChar);

	DisplayCharacter(cChar);
	return 0;
}


void DisplayCharacter(char cChara)
{
	if(cChara<97)
	{
		printf("%c",tolower(cChara));
	}
	else
	{
		printf("%c",toupper(cChara));
	}
}