#include <iostream>

using namespace std;

class Node
{
    public:
        int data;
        Node* next;
};

class Stack
{
    private:
        Node* head = NULL;
    public:
        void push(int n)
        {
            Node* p = head;
            Node* temp = new Node();
            temp->data = n;
            if(head == NULL)
            {
                head = temp;
                temp->next = NULL;
                print();
                return;
            }
            while(p->next != NULL)
            {
                p = p->next;
            }
            p->next = temp;
            temp->next = NULL;
            print();
        }

        void pop()
        {
            Node* temp = NULL;
            Node* p = head;
            if(p == NULL)
            {
                cout<<"Underflow!\n";
                return;
            }
            while(p->next != NULL)
            {
                temp = p;
                p = p->next;
            }
            temp->next = NULL;
            delete p;
        }

        void peak()
        {
            Node* p = head;
            if(p == NULL)
            {
                cout<<"Stack is Empty!"<<endl;
                return;
            }
            while(p->next != NULL)
            {
                p = p->next;
            }
            cout<<p->data<<endl;
        }

        bool isEmpty()
        {
            if(head == NULL)
                return true;
            return false;
        }

        void print()
        {
            Node* p = head;
            while(p != NULL)
            {
                cout<<p->data<<" ";
                p=p->next;
            }
            cout<<endl;
        }
};

int main()
{
    Stack s1;
    cout<<s1.isEmpty()<<endl;
    s1.push(3);
    s1.push(5);
    s1.push(7);
    s1.pop();
    s1.print();
    s1.peak();
    s1.pop();
    s1.push(10);
    cout<<s1.isEmpty()<<endl;
}
