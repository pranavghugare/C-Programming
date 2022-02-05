#include<stdio.h>

int Addition(int Brr[],int iSize)
{
	for(iCnt=0;iCnt<=iSize;iCnt++)
	{
		iSum+=Brr[iCnt];
	}
	return iSum;
}	
int main()
{
	int *Arr=NULL;
	int iRet=0,iCnt=0,iLength=0;
	
	printf("Enter Number of Element\n");
	scanf("%d",&iLength);
	
	Arr=(int *)malloc(sizeof(int)*iLength);
	printf("Enter Number\n");
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",Arr[iCnt]);
	}
	
	iRet=Addition(Arr,iLength);
	printf("Addition id:%d",iRet);
	
	free (Arr);
	return 0;
}