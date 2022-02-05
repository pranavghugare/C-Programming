#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
	int fd=0;
	char Fname[30];
	
	printf("Enter File name\n");
	scanf(" %s",Fname);
	
	fd=creat(Fname,0777);	
	//fd=creat("Marvellous111.txt",0777);
	
	if(fd == -1)
	{
		printf("Unable to create the filke\n");
	}
	else
	{
		printf("File Succefully created\n");
	}

	return 0;
}