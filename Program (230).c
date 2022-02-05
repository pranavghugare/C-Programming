#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fd=0;
	char Arr[]="Hello World";
	
	fd=open("LB_17.txt",O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file");
	}
	write(fd,Arr,11);
	
	return 0;
}