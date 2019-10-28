#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int Data;
	struct Node *Next;
	struct Node *Prev;
};

void AddAtLast(int);
void DeleteAtLast();
void Traverse();

struct Node *Start=NULL;
struct Node *End = NULL;
int Count=0;

int main()
{
	for(;;)
	{
		int Choice, Data;

		printf("\n Enter the Choice:\n");
		printf(" 1.AddAtLast 2.DeleteAtLast 3.Traverse\n");
		scanf_s("%d", &Choice);

		switch (Choice)
		{
		case 1:
			printf("\n Enter Data:\n");
			scanf_s("%d", &Data);
			AddAtLast(Data);
			break;

		case 2:
			DeleteAtLast();
			break;

		case 3:
			Traverse();
			break;
		}
	}

	return 0;
}

void AddAtLast(int Value)
{
	struct Node *t,*temp;

	t = (struct Node*)malloc(sizeof(struct Node));

	if (Start == NULL)
	{
		Start = t;
		t->Data = Value;
		t->Next = NULL;
		t->Prev=NULL;
	}


	temp = Start;

	while (temp->Next != 0)
	{
		temp = temp->Next;
	}

	temp->Next = t;
	t->Data = Value;
	t->Next = NULL;
	t->Prev = temp->Next;

	End = t->Prev;

	printf("\n |Previous Address : %d | Data : %d | Next Address : %d \n", t->Prev, t->Data, t->Next);

	printf("\n Value At End is: %d\n", End);
	
	Count++;
}

void DeleteAtLast()
{
	struct Node *t;

	t = Start;

	if (Start == NULL)
	{
		printf("\n LinkList is already Empty...!!!!\n");
		return;
	}

	if (t->Next == NULL && t->Prev == NULL)
	{
		printf("\n Deleting one and only node from list \n");
		free(Start);
		Start = NULL;
		return;
	}

	while (t->Next != End)
	{
		t = t->Next;
	}

	printf("\n Value At End Before Deleting Last Node is: %d\n", End);
	printf("\n T = Previous Address : %d | Present Data : %d | Next Address : %d \n", t->Prev, t->Data, t->Next);
	printf(" Deleting Last Node..........\n");
	free(End);
	End = t->Prev;
	t->Next = NULL;
	printf("\n Value At End After Deleting Last Node is: %d\n", End);
	
}

void Traverse()
{
	struct Node *t = Start;

	if (Start == NULL)
	{
		printf("\n LinkList is already Empty...!!!!\n");
		return;
	}

	printf("\n Value At Start is: %d \n", Start);

	while (t->Next != NULL)
	{
		printf(" |Previous Address : %d | Present Data : %d | Next Address : %d \n",t->Prev,t->Data,t->Next);
		t = t->Next;
	}

	if (t != NULL)
	{
		printf(" |Previous Address : %d | Present Data : %d | Next Address : %d \n", t->Prev, t->Data, t->Next);
	}

	printf("\n Value At End is: %d\n", End);
}