#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int LastOccurance(int Arr[],int iSize,int iKey)
{
	int i=0,iCnt=-1;
	bool bAns=false;
	for(i=0;i<iSize;i++)  
	{
		if(Arr[i]==iKey)
		{				
			iCnt=i;			
		}				
	}
	return iCnt;
}
	/*for(i=iSize-1;i>=0;i--)
	{
		if(Arr[i]==iKey)
		{
			break;
		}
	}
	return i;
			
	if(i>iSize)
	{
		return -1;
	}
	else 
	{
		return iCnt;
	}
}*/

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
	iRet=LastOccurance(ptr,iLength,iNo);
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