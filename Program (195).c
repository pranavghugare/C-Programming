#include<stdio.h>

void Diplay()
{
	int i=0;
	printf("ASCII table is\n");
	printf("*************************************************");
	for(i=0;i<=127;i++)
	{
		printf("%d\t%c\n",i,i);
	}
	printf("*************************************************");
}
int main()
{
	Diplay();
	return 0;
}