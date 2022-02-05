#include<stdio.h>
#include<stdlib.h>

int Count(int Arr[],int iSize)
{
	int i=0,iCnt=0;
	int iMax=-1;
	for(i=0;i<iSize;i++)
	{
		if(iMax<Arr[i])
		{
			iMax=Arr[i];
		}
	}
	return iMax;
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
	
	
	iRet=Count(ptr,iLength);
	printf("Number of Even Elements are:%d\n",iRet);
	free(ptr);
	return 0;
}