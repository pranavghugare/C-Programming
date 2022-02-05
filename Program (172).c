#include<stdio.h>

int main()
{
	int Arr[5];	//Array of 5 Integer (static memory allocation)
	int iSum=0;
	int iCnt=0;
	
	printf("Enter Array Element\n");

	/*scanf("%d",&Arr[0]);
	scanf("%d",&Arr[1]);
	scanf("%d",&Arr[2]);
	scanf("%d",&Arr[3]);
	scanf("%d",&Arr[4]);*/
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	/*}
	for(iCnt=0;iCnt<5;iCnt++)
	{*/
		iSum+=Arr[iCnt];
	}
	printf("%d",iSum);

	
	return 0;
}