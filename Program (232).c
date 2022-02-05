#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fd=0;
	char Arr[10];
	
	fd=open("LB_17.txt",O_RDWR);
	if(fd==-1)
	{
		printf("Unable to open file");
	}
	read(fd,Arr,5);
	
	printf("Data from file is:\t");
	
	write(1,Arr,5);
	
	close(fd);
	return 0;
}