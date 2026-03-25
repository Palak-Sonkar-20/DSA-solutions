#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node( int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
void inorder(Node* root){
    if(root == NULL){
        return;
    }
    inorder(root->left);
    cout<< root->data<<" ";
    inorder(root->right);
}
void Preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<< root->data<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->right);
    cout<< root->data<<" ";
    postorder(root->left);
}
int main(){
    Node* root = new Node(2);
    root->left = new Node(3);
    root->right = new Node(4);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    root->right->left = new Node(7);
    root->right->right = new Node(8);

    cout<<"Preorder Traversal: ";
    Preorder(root);
    cout<<endl;
    cout<<"Inorder Traversal: ";
    inorder(root);
    cout<<endl;
    cout<<"Postorder Traversal: ";
    postorder(root);
    return 0;
}