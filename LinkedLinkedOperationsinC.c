#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
}*head;

void insert(int d)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = d;
    if(head == NULL)
    {
        head = temp;
        temp->next = NULL;
    }
    else
    {
        struct node* ptr = head;
        while(ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        ptr->next->next = NULL;
    }
}
void insertatbeg(int d)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = d;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}
void insertatloc(int d, int loc)
{
    struct node* ptr = head;
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
    temp->data = d;
    temp->next = NULL;
    for(int i = 0; i < loc-1; i++)
    {
        if(i == 0)
            ptr = head;
        else
            ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}
void print()
{
    struct node* ptr = head;
    while(ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
void reverse()
{
    struct node* temp = head;
    struct node* prev = NULL;
    struct node* forward = head->next;
    while(forward != NULL)
    {
        temp->next = prev;
        prev = temp;
        temp = forward;
        forward = forward->next;
    }
    head = temp;
    temp->next = prev;
}
int main()
{
    head = NULL;
    while(1)
    {
        int choice;
        printf("\n1. Insert at end");
        printf("\n2. Insert at beginning");
        printf("\n3. Insert at Location:");
        printf("\n4. Reverse List");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 1)
        {
            int data;
            printf("\nEnter data to add to linked list at the end:");
            scanf("%d", &data);
            insert(data);
            print();
        }
        else if(choice == 2)
        {
            int data;
            printf("\nEnter data to add to linked list at the beginning:");
            scanf("%d", &data);
            insertatbeg(data);
            print();
        }
        else if(choice == 3)
        {
            int data, loc;
            printf("\nEnter data to add to linked list at the beginning and location:");
            scanf("%d %d", &data, &loc);
            insertatloc(data, loc);
            print();
        }
        else if(choice == 4)
        {
            reverse();
            print();
        }
        else
            break;
    }
}
