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
int main(){
    Node* head= NULL;

    insertatend(head,10);
    insertatend(head, 20);
    insertatend(head, 30);
    printlist(head);

    return 0;
}
