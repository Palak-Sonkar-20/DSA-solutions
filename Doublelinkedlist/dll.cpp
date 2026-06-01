#include<bits/stdc++.h>
using namespace std;
struct Node{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int value){
        data = value;
        next = NULL;
        prev = NULL;
    }
};
Node* creatdll( vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i = 1; i< arr.size() ;  i++){
       Node* temp = new Node(arr[i]);
       prev->next = temp;
       temp->prev = prev;
       prev = temp;
    }
    return head;
}
 void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<< temp->data<<" ";
        temp = temp->next;

    }
}
// deleting the head
Node* remove 
//deleting the tail
//deleting the kth element
//deleting a node
int main(){
    vector<int> arr = { 1, 2, 3 , 4, 12};
    Node* head = creatdll(arr);
    print(head);
}