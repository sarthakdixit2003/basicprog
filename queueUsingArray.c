#include<stdio.h>
#include<stdlib.h>
#define maxsize 10
struct queue
{
    int front;
	int rear;
    int arr[maxsize];
}q;
void initialize()
{
    q.front = -1;
	q.rear = -1;
}
int isEmpty()
{
	if((q.front == -1 && q.rear == -1) || q.front == q.rear)
		return 1;
	return 0;
}
void insertion(int data)
{
	if((q.front == 0 && q.rear == maxsize-1) || (q.front == q.rear + 1))
	{
		printf("Overflow\n");
		return;
	}
	else
	{
		if(q.front == -1)
			q.front++;
		q.rear++;
		q.arr[q.rear] = data;
	}
}
int deletion()
{
	if(q.front == -1 || q.front > q.rear)
	{
		printf("Underflow\n");
		return -1;
	}
	int x = q.arr[q.front];
	q.front++;
	return x;
}
void display()
{
	if(q.front == -1 || q.front > q.rear)
	{
		printf("Queue is Empty\n");
		return;
	}
	for(int i = q.front; i <= q.rear; i++)
		printf("%d ", q.arr[i]);
	printf("\n");
}
int main()
{
	int choice, x;
	while(1)
	{
		printf("1. insert\n");
		printf("2. delete\n");
		printf("3. show\n");
		printf("4. exit\n");
		printf("Enter your choice:");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("Enter element to insert:");
				scanf("%d", &x);
				insertion(x);
				break;
			case 2:
				deletion();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(1);
			default:
				printf("Invalid Choice");
		}
	}
}

