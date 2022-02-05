#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>


int main()
{
	int fd=0;
	char Arr[]="Hello";
	
	fd=open("LB_17.txt",O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file");
		return -1;
	}
	
	lseek(fd,10,2);
	
	write(fd,Arr,5);
	
	close(fd);
	return 0;
}