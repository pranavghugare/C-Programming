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
		return -1;
	}
	//////////change offset
	//0 from strating position
	//1 from current position
	//2 from end of the file
	
	lseek(fd,-5,2);
	read(fd,Arr,5); // to read data from the file
	printf("Data from file is:\t");
	write(1,Arr,5); // to write read data on the monitor

	close(fd);
	return 0;
}