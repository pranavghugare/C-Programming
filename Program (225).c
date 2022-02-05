#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd=0,iRet=0;
	char Fname[30];
	char Data[7];
	printf("Enter File name\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to Open the file\n");
		return -1;
	}
	else
	{
		printf("File Succesfully open With FD : %d\n",fd);
	}
	
	iRet=read(fd,Data,7);
	
	printf("%d bytes gets Succesfully read from the file\n",iRet);
	
	printf("Data from the file is\n");
	
	write(1,Data,iRet);
	
	return 0;
}