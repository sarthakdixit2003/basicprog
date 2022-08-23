#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
};
Node* head = NULL;

class Queue
{
    public:
        void enqueue(int x)
        {
            Node* temp = new Node();
            temp->data = x;
            if(head == NULL)
            {
                head = temp;
                temp->next = NULL;
                print();
                return;
            }
            temp->next = head;
            head = temp;
            print();
        }

        void dequeue()
        {
            if(head == NULL)
            {
                cout<<"Queue is Empty!"<<endl;
                return;
            }
            Node* prev = NULL;
            Node* temp = head;
            while(temp->next != NULL)
            {
                prev = temp;
                temp = temp->next;
            }
            prev->next = NULL;
            delete temp;
            print();
        }

        int peak()
        {
            Node* temp = head;
            if(head == NULL)
            {
                cout<<"Queue is Empty!"<<endl;
                return 0;
            }
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            return temp->data;
        }

        bool isEmpty()
        {
            if(head == NULL)
                return true;
            return false;
        }
        void print()
        {
            Node* temp = head;
            if(head == NULL)
            {
                cout<<"Queue is Empty"<<endl;
                return;
            }
            while(temp != NULL)
            {
                cout<<temp->data<<" ";
                temp = temp->next;
            }
            cout<<endl;
        }
};

int main()
{
    Queue q;
    q.dequeue();
    q.enqueue(5);
    q.enqueue(9);
    cout<<q.peak()<<endl;
    q.enqueue(3);
    q.dequeue();
    q.enqueue(4);
    q.enqueue(0);
    q.dequeue();
    q.enqueue(1);

}
