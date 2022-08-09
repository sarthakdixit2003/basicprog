#include <iostream>
#include <vector>
using namespace std;
/*Linked List Operations-
    Create
    Insert
    Traverse
    Delete
    Print*/
class Node
{
    public:
        int data;
        Node* next;
};

void insertAtHead(Node** node, int d)
{
    Node* ptr = new Node;
    ptr->data=d;
    ptr->next=*node;
    *node=ptr;
}

void insert(Node* prev, int d)
{
    Node* ptr=new Node;
    ptr->data=d;
    ptr->next=prev->next;
    prev->next=ptr;
}

void deleteL(Node* head, int key)
{
    Node* prev=head;
    while(head!=NULL)
    {
        if(head->data!=key)
        {
            prev=head;
            head=head->next;
        }
        else
        {
            head=prev;
            head->next=head->next->next;
            break;
        }
    }
}
void printList(Node *node)
{
    while(node!=NULL)
    {    
        cout<<node->data<<"->";
        node=node->next;
    }
    cout<<"\n";
}
int main()
{
    Node *head= new Node;
    Node *second= new Node;
    Node *third= new Node;

    //Assigning value
    head->data=1;
    second->data=2;
    third->data=3;

    //Connecting Nodes
    head->next=second;
    second->next=third;
    third->next=NULL;

    printList(head);
    insertAtHead(&head,9);
    printList(head);
    insert(head,8);
    printList(head);
    insert(second,0);
    printList(head);
    deleteL(head,8);
    printList(head);
}