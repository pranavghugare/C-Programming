#include<stdio.h>
#include<stdlib.h>

int Count(int Arr[],int iSize,int iNum,int iNum1)
{
	int i=0,iCnt=0;
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]>iNum && Arr[i]<iNum1)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	int iLength=0,i=0, iRet=0,iNo=0,iNo1=0;
	int *ptr=NULL;
	
	printf("Enter Number of Elements\n");
	scanf("%d",&iLength);
	
	ptr=(int *)malloc(sizeof(int)*iLength);
	printf("Enter Elemnet\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Enter Lower Range\n");
	scanf("%d",&iNo);
	printf("Enter Higher Range\n");
	scanf("%d",&iNo1);
	
	iRet=Count(ptr,iLength,iNo,iNo1);
	printf("Number of Even Elements are:%d\n",iRet);
	free(ptr);
	return 0;
}