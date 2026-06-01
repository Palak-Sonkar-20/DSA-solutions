#include<bits/stdc++.h>
using namespace std;
struct Node{
public:
    int data;
    Node* next;
    Node(int value){
        data= value;
        next=NULL;
    }
};
Node* createllfromarr( vector<int> arr){
    Node* head = new Node(arr[0]);
    Node* Mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        Mover->next = temp;
        Mover = temp;
    }
    return head;
}
//traversal
//insertion at the end and head of ll
//deletion at the end and head of ll
//find length
//search an element in ll
int length(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp){
        temp=temp->next;
        count++;
    }
    return count;
}
bool search(Node* head , int key){
    Node* temp = head;
    while(temp){
        if(temp->data == key){
            return true;
        }
        temp = temp-> next;
    }
    return false;
}
int main(){
    vector<int> arr ={1,2,3,4,5};
    Node* head = createllfromarr(arr);
    Node* temp = head;
    while(temp!= NULL){
        cout<< temp ->data<<" ";
        temp = temp->next;
    }
    bool found =search(head, 6);
    cout<< found <<endl;
    int len = length(head);
    cout<< len << endl;
   
         
        
    
}