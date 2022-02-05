#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
bool Minimum(int Arr[],int iSize,int iKey)
{
	int i=0,iCnt=0;
	bool bAns=false;
	for(i=0;i<iSize;i++)  
	{
		if(Arr[i]==iKey)
		{					//		We schould not write return in loops
			return true;	//	bAns=true;	
		}					//	break;
	}
	return false;			//	return bAns;
}

int main()
{
	int iLength=0,i=0,iNo=0;
	int *ptr=NULL;
	bool iRet=false;
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
	if(iRet==true)
	{
		printf("Number is Present\n");
	}
	else
		printf("Number is Not Present\n");
	
	free(ptr);
	return 0;
}