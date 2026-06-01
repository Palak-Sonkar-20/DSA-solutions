#include <bits/stdc++.h>
using namespace std;
struct Node{
public:
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = NULL;
    }
};
Node* removehead(Node* &head){
    Node* temp = head;
    head = head-> next;
    // delete temp;
    free(temp);
    return head;
}
Node* createllfromarr( vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* Mover = head;
    for(int i = 1; i < arr.size() ;  i++){
        Node* temp = new Node(arr[i]);
        Mover->next= temp;
        Mover = temp;
    }
    return head;
}

void print(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<< endl;
}
//remove tail
Node* removetail(Node* &head){
    Node* temp = head;
    while(temp->next->next!= NULL){
        temp = temp->next;    }
    free(temp->next);
    temp->next = NULL;
    return head;
}
//remove kth element
Node* removek(Node* head , int k){
    Node* temp = head;
     if(k==1){
        head = head->next;
        delete temp;
        return head;
    }
    int cnt = 0 ;
    Node* Prev = NULL;
    while(temp && cnt<k-1){
    
        Prev = temp;
        temp = temp->next;
        cnt++;
    }
    if(temp){
        Prev->next = temp->next;
        delete temp;
        break;
    }
    return head;
}
// remove by element value
Node* removebyval( Node* head , int val){
    Node* temp = head;
    if(temp->data == val){
        head = head->next;
        delete temp;
        return head;
    }
    Node* Prev = NULL;
    while(temp->data != val && temp!= NULL){
        Prev = temp;
        temp = temp->next;
    }
    if(temp){
        Prev->next = temp->next;
        delete temp;
    }
    return head;
}
//Insertions 

int main(){
    vector<int> arr ={1, 2 , 3 , 4 , 5};
    Node* head= createllfromarr(arr);
    head = removek(head , 2);
    print(head);
}
 
