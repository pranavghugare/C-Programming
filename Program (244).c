#include<stdio.h>
#include<stdlib.h>

struct node			// self referentioal stucture
{
	int Data;
	struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;		
typedef struct node ** PPNODE;

int main()
{
	PNODE First =NULL;	//8 bit
	NODE obj;		//12 bit
	return 0;
}	