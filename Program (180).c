#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
	int i=0,iCnt=0;
	int iMin=Arr[0];
	int iMax=Arr[0];
	for(i=1;i<iSize;i++)
	{
		if(iMin>Arr[i])
		{
			iMin=Arr[i];
		}
		if(iMax<Arr[i])
		{
			iMax=Arr[i];
		}
		
	}
	return iMax-iMin;;
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
	
	
	iRet=Minimum(ptr,iLength);
	printf("Number of Even Elements are:%d\n",iRet);
	free(ptr);
	return 0;
}