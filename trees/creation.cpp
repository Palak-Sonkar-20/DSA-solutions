#include<bits/stdc++.h>
using namespace std;
//class for tree node
class Node{
public:
    int data;
    Node* Left;
    Node* Right;

    Node(int val){
        data = val;
        Left = NULL;
        Right = NULL;
    }
};

int main(){
    //creating a tree
    Node* root = new Node(2);
    root->Left = new Node(3);
    root->Right = new Node(4);
    root->Left->Left = new Node(5);
    return 0;
}