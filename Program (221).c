#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>
int main()
{
	int fd=0;
	char Fname[30];
	
	printf("Enter File name\n");
	scanf("%s",Fname);
	
	fd=open(Fname,O_RDWR);
	
	if(fd == -1)
	{
		printf("Unable to Open the file\n");
	}
	else
	{
		printf("File Succesfully open With FD : %d\n",fd);
	}

	return 0;
}