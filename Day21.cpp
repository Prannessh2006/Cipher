#include<iostream>
using namespace std;
//question1
struct Node{
    int data;
    Node* next;
    Node* prev;
    Node(int value){
        this->data=value;
        this->next=nullptr;
        this->prev=nullptr;
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
        newnode->prev=newnode;
        tail=newnode;
    }
}
void insertatpos(int value,int pos,int size){
    Node* newnode = new Node(value);
    int count=0;
    Node* curr=head;
    if(pos==0){
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
    }
    else if(pos==size-1){
        tail->next=newnode;
        newnode->prev=newnode;
        tail=newnode;
    }
    else{
        while(count+1!=pos){
            curr=curr->next;
            count+=1;
        }
        Node* temp1= curr->next;
        Node* temp2 = curr->prev;
        temp1->prev=newnode;
        newnode->next=temp1;
        temp2->next=newnode;
        newnode->prev=temp2;
    }
}
void printlist(){
    Node* curr=head;
    while(curr!=NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
}
int main(){
    int num,value,pos;
    cin >> num;
    for(int i=0;i<num;i++){
        cin >> value;
        insertatend(value);
    }
    cin >> pos;
    cin >> value;
    insertatpos(value,pos,num);
    printlist();
    
}
