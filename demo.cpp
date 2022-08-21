#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
};

void insert(Node** headRef, int x)
{
    Node* temp = new Node();
    temp->data = x;
    temp->next = *headRef;
    *headRef = temp;
}

void print(Node* temp)
{
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

Node* reverse(Node* head)
{
    Node* temp = NULL;
    Node* prev = NULL;
    prev = head;
    head = head->next;
    prev->next = NULL;
    temp = head;
    head = head->next;
    while(head != NULL)
    {
        temp->next = prev;
        prev = temp;
        temp = head;
        head = head->next;
    }
    temp->next = prev;
    head = temp;
    return head;
}

int main()
{
    /*Node* head = new Node();
    Node* one = new Node();
    Node* two = new Node();
    Node* three = new Node();
    Node* four = new Node();

    head->data = 2;
    one->data = 3;
    two->data = 4;
    three->data = 5;
    four->data = 6;
    
    head->next = one;
    one->next = two;
    two->next = three;
    three->next = four;
    four->next = NULL;*/

    Node* head = NULL;
    int n, x;
    cout<<"How many numbers do you want to insert?:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Number:";
        cin>>x;
        insert(&head, x);
        print(head);
    }
    cout<<"\n\n";
    head=reverse(head);
    cout<<"Reverse List-";
    print(head);
}