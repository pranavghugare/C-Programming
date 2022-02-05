#include<Stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node * next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head,PNODE Tail)
{
	if(Head==NULL && Head==NULL)
	{
		return;
	}
	do
	{
		printf("|%d|->",Head->data);
		Head=Head->next;
	}while(Head!=Tail->next);
	printf("\n");
}

int Count(PNODE Head,PNODE Tail)
{
	int iCnt=0;
	if(Head==NULL && Head==NULL)
	{
		return 0;
	}
	do
	{
		iCnt++;
		Head=Head->next;
	}while(Head!=Tail->next);
	return iCnt;
}

void InsertFirst(PPNODE Head,PPNODE Tail,int no)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	
	if((*Head == NULL) && (*Tail == NULL))
	{
		*Head=newn;
		*Tail=newn;
	}
	else
	{
		newn->next=*Head;
		*Head=newn;
	}
	 (*Tail)->next=*Head;
}

void InsertLast(PPNODE Head,PPNODE Tail,int no)
{
	
	PNODE newn=NULL;
	newn=(PNODE)malloc(sizeof(NODE));
	
	newn->data=no;
	newn->next=NULL;
	
	if((*Head == NULL) && (*Tail == NULL))
	{
		*Head=newn;
		*Tail=newn;
	}
	else
	{
		(*Tail)->next=newn;
		(*Tail)=newn;
	}
}


void InsertAtPos(PPNODE Head,PPNODE Tail,int no,int iPos)
{
	
}

void DeleteFirst(PPNODE Head,PPNODE Tail)
{
	if((*Head ==NULL)&&(*Tail==NULL))
	{
		return;
	}
	else if(*Head==*Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
	}
	else
	{
		*Head=(*Head)->next;
		free((*Tail)->next);
		(*Tail)->next=*Head;
	}
}

void DeleteLast(PPNODE Head,PPNODE Tail)
{
	PNODE temp=*Head;
	if((*Head ==NULL)&&(*Tail==NULL))
	{
		return;
	}
	else if(*Head==*Tail)
	{
		free(*Head);
		*Head=NULL;
		*Tail=NULL;
	}
	else
	{
		while(temp->next!=*Tail)
		{
			temp=temp->next;
		}
		free(*Tail); //free(temp->next);
		*Tail=temp;
		(*Tail)->next=*Head;
	}
	
}

void DeleteAtPos(PPNODE Head,PPNODE Tail,int iPos)
{
	
}
int main()
{
	PNODE first=NULL;
	PNODE last=NULL;
	int iRet=0;
	
	InsertFirst(&first,&last,51);
	InsertFirst(&first,&last,21);
	InsertFirst(&first,&last,11);
	
	InsertLast(&first,&last,101);
	
	Display(first,last);
	iRet=Count(first,last);
	
	printf("Number of element are:%d",iRet);
	DeleteFirst(&first,&last);
	DeleteLast(&first,&last);
	
	Display(first,last);
	iRet=Count(first,last);
	
	printf("Number of element are:%d",iRet);
	
	return 0;
}