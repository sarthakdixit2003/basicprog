#include<stdio.h>
#include<stdlib.h>
int a[10];
int front = -1, rear = 10;
int isfull()
{
	if(front == rear)
		return 1;
	else
		return 0;
}
int isempty()
{
	if(front == -1 && rear == 10)
		return 1;
	else
		return 0;
}
void pushfront(int data)
{
	if(isfull())
	{
		printf("\nQueue is full");
		return;
	}
	front++;
	a[front] = data;
	//front++;
}
void pushrear(int data)
{
	if(isfull())
	{
		printf("\nQueue is full");
		return;
	}
	rear--;
	a[rear] = data;
	//front++;
}
int deletefront()
{
	if(isempty())
	{
		printf("\nQueue is empty!");
		return -1;
	}
	int x = a[front];
	front++;
	return x;
}
int deleterear()
{
	if(isempty())
	{
		printf("\nQueue is empty!");
		return -1;
	}
	int x = a[rear];
	rear--;
	return x;
}
void show()
{
	if(isempty())
	{
		printf("\nQueue is empty!");
		return ;
	}
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
int main()
{
	int choice, x;
	while(1)
	{
		printf("\nDouble Queue implementation");
		printf("\n1. Insert from front.");
		printf("\n2. Insert from rear.");
		printf("\n3. Delete from front.");
		printf("\n4. Delete from rear.");
		printf("\n5. Display Queue.");
		printf("\n6. Exit.");
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				//int x;
				printf("\nEnter element to insert:");
				scanf("%d", &x);
				pushfront(x);
				break;
			case 2:
				//int x;
				printf("Enter element to insert:");
				scanf("%d", &x);
				pushrear(x);
				break;
			case 3:
				deletefront();
				break;
			case 4:
				deleterear();
				break;
			case 5:
				show();
				break;
			case 6:
				exit(0);
			default:
				printf("Invalid Choice");
		}
	}
	return 0;
}
