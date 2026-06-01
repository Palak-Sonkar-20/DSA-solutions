#include<bits/stdc++.h>
using namespace std;
class Node{
public:
     int data;
     Node* next;

     Node(int value){
        data = value;
        next = NULL ;

     }
};

void insertatend(Node* &head, int value){
    Node* newNode = new Node(value);

    if (head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next !=NULL){
        temp = temp->next;
    }
    temp->next = newNode;

}
void printlist(Node* head){
    Node* temp = head;

    while(temp!= NULL){
        cout<< temp->data <<"->";
        temp = temp->next;
    }
    cout<< "NULL" << endl;
}
//check for cycle
bool hascycle(Node*head){
    Node* slow= head;
    Node* fast = head;
    while( fast && fast->next){
        slow= slow->next;
        fast = fast->next-> next;
        if(slow==fast){
            return true;
        }
    }
    return false;
}
int main(){
    Node* head= NULL;

    insertatend(head,10);
    insertatend(head, 20);
    insertatend(head, 30);
    printlist(head);
    cout << "Has cycle: " << hascycle(head) << endl;
    return 0;
}
