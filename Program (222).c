#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fd=0,iRet=0;
	char Fname[30];
	char Data[]="Marvellous Infosystems";
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
	
	iRet=write(fd,Data,22);
	
	printf("%d bytes gets Succesfully written in the file\n",iRet);
	
	return 0;
}