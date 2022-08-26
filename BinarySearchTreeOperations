#include <iostream>
#include <queue>
using namespace std;

class Node
{
    public:
        int data;
        Node* left;
        Node* right;
};

class BST
{
    public:
        Node* insert(Node* root, int x)
        {
            Node* p = new Node();
            p->data = x;
            p->left = NULL;
            p->right = NULL;
            if(root == NULL)
            {
                root = p;
                
            }

            else if(x <= root->data)
                root->left = insert(root->left, x);
            
            else
                root->right = insert(root->right, x);
            return root;
        }

        bool search(Node* root, int x)
        {
            if(root == NULL)
                return false;
            else if(x == root->data)
                return true;
            else if(x < root->data)
                search(root->left, x);
            else
                search(root->right, x);
        }
        void inorder(Node* root)
        {
            if(root == NULL)
                return;
            inorder(root->left);
            cout<<root->data<<" ";
            inorder(root->right);
        }

        int minimum(Node* root)
        {
            if(root->left == NULL)
                return root->data;
            minimum(root->left);
        }
        int maximum(Node* root)
        {
            if(root->right == NULL)
                return root->data;
            maximum(root->right);
        }
        int maxHeight(Node* root)
        {            
            if(root == NULL)
                return -1;
            int leftHeight = maxHeight(root->left);
            int rightHeight = maxHeight(root->right);
            if(leftHeight > rightHeight)
                return leftHeight + 1;
            else
                return rightHeight + 1;
        }
        void bfs(Node* root)
        {
            queue<Node*> q;
            //Node* temp = NULL;
            q.push(root);
            while(!q.empty())
            {
                root = q.front();
                cout<<root->data<<" ";
                q.pop();
                if(root->left != NULL)
                    q.push(root->left);
                if(root->right != NULL)
                    q.push(root->right);
            }
        }
};

int main()
{
    Node* root = NULL;
    BST t;
    root = t.insert(root, 8);
    cout<<t.search(root, 8)<<endl;
    root = t.insert(root, 6);
    cout<<t.search(root, 6)<<endl;
    root = t.insert(root, 10);
    cout<<t.search(root, 10)<<endl;
    root = t.insert(root, 5);
    cout<<t.search(root, 5)<<endl;
    root = t.insert(root, 7);
    cout<<t.search(root, 7)<<endl;
    root = t.insert(root, 9);
    cout<<t.search(root, 9)<<endl;
    root = t.insert(root, 12);
    cout<<t.search(root, 12)<<endl;
    root = t.insert(root, 14);
    t.inorder(root);
    cout<<endl<<t.minimum(root)<<endl;
    cout<<t.maximum(root)<<endl;
    cout<<"Max Height "<<t.maxHeight(root)<<endl;
    t.bfs(root);
}
