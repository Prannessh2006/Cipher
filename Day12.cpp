//question 1;
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=nullptr;
    }
};
Node* head=nullptr;
void printlist(){
    Node* curr=head;
    while(curr!=NULL){
        cout << curr->data << " ";
        curr=curr->next;
    }
}
int main(){
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    printlist();
}
//question 2;
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=nullptr;
    }
};
Node* head=nullptr;
void printlist(){
    Node* curr=head;
    while(curr!=NULL){
        cout << curr->data << " ";
        curr=curr->next;
    }
}
void insertAtEnd(int data){
    Node* newnode = new Node(data);
    Node* curr=head;
    while(curr->next!=nullptr){
        curr=curr->next;
    }
    curr->next=newnode;
}
int main(){
    head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    insertAtEnd(40);
    printlist();
}
