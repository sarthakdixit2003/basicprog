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
        printf("\n1. Insert");
        printf("\n2. Reverse List");
        printf("\nEnter choice: ");
        scanf("%d", &choice);
        if(choice == 1)
        {
            int data;
            printf("\nEnter data to add to linked list:");
            scanf("%d", &data);
            insert(data);
            print();
        }
        else if(choice == 2)
        {
            reverse();
            print();
        }
        else
            break;
    }
}
