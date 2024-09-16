#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
    Node(int value){
        data=value;
        next=nullptr;
    }
};
Node* head=nullptr;
Node* tail=nullptr;
void insertatend(int value){
    Node* newnode = new Node(value);
    if(head==nullptr){
        head=newnode;
        tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}
void insertatsort(int value){
    Node* newnode = new Node(value);
    Node* curr=head;
    if(curr->data>=value){
        newnode->next=head;
        head=newnode;
        return;
    }
    else{
        while(curr->next!=nullptr){
            if(curr->next->data>=value){
                newnode->next=curr->next;
                curr->next=newnode;
                return;
            }
            curr = curr->next;
        }
        tail->next=newnode;
        tail=newnode;
    }
}
void printlist(){
    Node* curr=head;
    while(curr!=NULL){
        cout  << curr->data <<" ";
        curr = curr->next;
    }
}
int main(){
    int num,value;
    cin >> num;
    for(int i=0;i<num;i++){
        cin >> value;
        insertatend(value);
    }
    cin >> value;
    insertatsort(value);
    printlist();
}
