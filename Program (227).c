#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fd=0,iRet=0,iCnt=0;
	char Fname[30];
	char Buffer[1024];  //mug
	printf("Enter File name\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDONLY);
	
	if(fd == -1)
	{
		printf("Unable to Open the file\n");
		return -1;
	}
	else
	{
		printf("File Succesfully open With FD : %d\n",fd);
	}
	printf("Data from file is:\n");
	printf("\n");
	while((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
	{
		iCnt+=iRet;
		write(1,Buffer,iRet);
	}
	printf("\nTotal bit of data read is: %d\n",iCnt);
	close(fd);
	return 0;
}