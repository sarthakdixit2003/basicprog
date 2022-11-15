#include <stdio.h>
#include <string.h>
//int size = 10;
struct stack
{
	char a[20];
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
void push(char n)
{

	if(s.top+1 >= 10)
	{
		printf("Overflow");
		return;
	}
	s.top++;
	s.a[s.top] = n;
}
char pop()
{
	char item;
	if(s.top == -1)
	{
		printf("Underflow");
		return;
	}
	item = s.a[s.top];
	s.top--;
	return item;
	
}
void printStack()
{
	for(int i = s.top; i > 0; i--)
		printf("%c", s.a[i]);
	printf("\n");
}
char peek()
{
	if(s.top == -1)
	{
		printf("Stack is empty");
		return -1;
	}
	return s.a[s.top];		
}
int isOperator(char symbol)
{
	if(symbol == '^' || symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
		return 1;
	else
		return 0;
}
int precedence(char symbol)
{
	if(symbol == '^')
		return 3;
	else if(symbol == '*' || symbol == '/')
		return 2;
	else if(symbol == '+' || symbol == '-')
		return 1;
}
int main()
{
	char p[20], ans[20];
	printf("Enter an infix expression:");
	scanf("%s", p);
	
	push('(');
	for(int i = 0; i < strlen(p); i++)
	{
		if(isOperator(p[i]))
		{
			
		}
		else
		{
			push(p[i]);
		}
	}
}
