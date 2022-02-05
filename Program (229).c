#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fdsrc=0,fddest=0,iRet=0,iCnt=0;
	char Fname1[30];
	char fname2[30];
	char Buffer[1024];  //mug
	printf("Enter source File name\n");
	scanf("%s",Fname1);
	
	
	fdsrc=open(Fname1,O_RDONLY);
	
	if(fdsrc == -1)
	{
		printf("Unable to Open the file\n");
		return -1;
	}
	else
	{
		printf("File Succesfully open With FD : %d\n",fdsrc);
	}
	
	printf("Enter destination File name\n");
	scanf("%s",fname2);
	
	fddest=creat(fname2,0777);
	
	while((iRet=read(fdsrc,Buffer,sizeof(Buffer)))!=0)
	{
		iCnt+=iRet;
		write(fddest,Buffer,iRet);
	}
	printf("\nTotal bit of data read is: %d\n",iCnt);
	close(fdsrc);
	close(fddest);
	return 0;
}