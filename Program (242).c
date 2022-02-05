#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd=0,iRet=0;
	char Fname[20];
	
	printf("Enter File\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDWR);
	
	if(fd==-1)
	{
		printf("Unable to open");
		return -1;
	}
	
	iRet=lseek(fd,0,2);
	
	printf("File size is: %d\n",iRet);
	
	close(fd);
	return 0;
}