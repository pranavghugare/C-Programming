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
	
	lseek(fd,5,0);
	
	read(fd,Arr,5);
	printf("Data from file is:\t");
	write(1,Arr,5);
	
	lseek(fd,5,1);
	
	read(fd,Arr,5);
	printf("\nData from file is:\t");
	
	write(1,Arr,5);
	
	close(fd);
	return 0;
}