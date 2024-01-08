#include<bits/stdc++.h>

using namespace std;

// Binary Tree Node 
struct node
{
    int data;
    struct node *left , *right;
    node(int val)
    {
        data = val;
        left = right = nullptr;
    }
};

void printInorder(struct node* Node)
{
    

    if(Node == nullptr)
        return ;

    printInorder(Node -> left);
    cout << Node -> data << " -> ";
    printInorder(Node -> right);
}

void printPreorder(struct node* Node)
{
    if(Node == nullptr)
        return ;

    cout << Node -> data << " -> ";
    printPreorder(Node -> left);
    printPreorder(Node -> right);
}

void printPostorder(struct node* Node)
{

    if(Node == nullptr)
        return ;

    printPostorder(Node -> left);
    printPostorder(Node -> right);
    cout << Node -> data << " -> ";
}

int main()
{
    struct node *root = new node(30);
    root -> left = new node(20);
    root -> right = new node(40);
    root -> left -> right = new node(25);
    root -> left -> left = new node(15);
    root -> right -> right = new node(50);
    root -> right -> left = new node(35);

        // Binary Tree structure
        /*
              30               -- root node / head node / parent node
          /     \
        /        \
       20         40           -- child nodes of root node
      / \         / \
    /    \       /   \ 
   15     25    35    50       --  leaf nodes
        */

    cout << "Inorder traversal of binary tree : \n";        // left node - root node - right node
    printInorder(root);

    cout <<"NULL \n";

    cout << "Preorder traversal of binary tree : \n";      // root node - left node - right node
    printPreorder(root);

    cout <<"NULL \n";

    cout << "Postorder traversal of binary tree : \n";    // left node - right node - root node
    printPostorder(root);

    cout << "NULL";

    return 0;
}
