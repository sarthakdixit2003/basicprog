#include <stdio.h>
#include <string.h>
//int size = 10;
struct stack
{
	int a[20];
	int top;	
}s;
void initialize()
{
	s.top = -1;
}
int isEmpty()
{
	if(s.top == -1)
		return 1;
	return 0;	
}
void push(int n)
{

	if(s.top+1 >= 10)
	{
		printf("Overflow");
		return;
	}
	s.top++;
	s.a[s.top] = n;
}
void pop()
{
	if(s.top == -1)
	{
		printf("Underflow");
		return;
	}
	s.top--;
}
void printStack()
{
	for(int i = s.top; i > 0; i--)
		printf("%d", s.a[i]);
	printf("\n");
}
int peek()
{
	if(s.top == -1)
	{
		printf("Stack is empty");
		return -1;
	}
	return s.a[s.top];		
}
int main()
{
	char p[20];
	printf("Enter a postfix evaluation:");
	scanf("%s", p);
	for(int i = 0; i < strlen(p); i++)
	{
		if(p[i] == '+')
		{
			int b = s.a[s.top];
			pop();
			int a = s.a[s.top];
			pop();
			push(b+a);
		}
		else if(p[i] == '-')
		{
			int b = s.a[s.top];
			pop();
			int a = s.a[s.top];
			pop();
			push(a-b);
		}
		else if(p[i] == '*')
		{
			int b = s.a[s.top];
			pop();
			int a = s.a[s.top];
			pop();
			//printf("%d %d", a, b);
			push(a * b);
		}
		else if(p[i] == '/')
		{
			int b = s.a[s.top];
			pop();
			int a = s.a[s.top];
			pop();
			
			//printf("%d %d %d", a, b);
			//printf("%f\n%f\n%f", a, b, a/b);
			push(a/b);
		}
		else
		{
			//printf("%d ", p[i]-48);
			push((int)(p[i]-48));
		}
		//printStack();
	}
	printf("%d\n", s.a[s.top]);
}
