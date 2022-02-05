#include<stdio.h>

void Display(int iRow,int iCol)
{	
	int iR=0,iC=0;
	
	for(iR=1;iR<=iRow;iR++)
	{
		for(iC=1;iC<=iCol;iC++)
		{
			printf("%d\t",iR);
		}
		printf("\n");
	}
}

int main()
{
	int iNo=0,iNo1=0;
	printf("Enter Number of Rows\n");
	scanf("%d",&iNo);
	printf("Enter Number of Columns\n");
	scanf("%d",&iNo1);
	Display(iNo,iNo1);
	
	return 0;
}