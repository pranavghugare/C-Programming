#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Minimum(int Arr[],int iSize,int iKey)
{
	int i=0,iCnt=0;
	bool bAns=false;
	for(i=0;i<iSize;i++)  
	{
		if(Arr[i]==iKey)
		{					//		We schould not write return in loops
			break;			//	bAns=true;	
		}					//	break;
	}
	if(i<iSize)
	{
		return i;
	}
	else
	{
		return -1;
	}
}

int main()
{
	int iLength=0,i=0,iNo=0;
	int *ptr=NULL;
	int iRet=0;
	printf("Enter Number of Elements\n");
	scanf("%d",&iLength);
	
	ptr=(int *)malloc(sizeof(int)*iLength);
	printf("Enter Elemnet\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("Enter Element to search\n");
	scanf("%d",&iNo);
	iRet=Minimum(ptr,iLength,iNo);
	if(iRet==-1)
	{
		printf("Number is Not Present\n");
	}
	else
	{
		printf("Number is Present at %d \n",iRet);
	}
	free(ptr);
	return 0;
}