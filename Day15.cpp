// Q.2 Write a C++ code that take linked list from user input and a value integer . Delete the value from the linkedlist. Sample Input :- 10->20->30->40 value = 20 Sample Output :- 10->30->40
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
void delelement(int value){
    if(head->data==value){
        Node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    else{
        Node* curr=head;
        while(curr->next->next!=nullptr){
            if(curr->next->data==value){
                Node* temp = curr->next;
                curr->next= curr->next->next;
                delete temp;
                return;
            }
            curr=curr->next;
        }
        if(curr->next->data==value){
            curr->next=nullptr;
            return;
        }
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
    delelement(value);
    printlist();
}
// Q.1 Write a program that defines a Student class and uses the this pointer in a member function to display the student's details.
#include<iostream>
using namespace std;
class student{
    int roll_no;
    string name;
    string section;
    public:
    student(int,string,string);
    void display();
};
student::student(int a,string b,string c){
    roll_no=a;
    name=b;
    section=c;
}
void student::display(){
    cout <<"Student details\n";
    cout << this->roll_no << " " << this->name << " " << this->section; 
}
int main(){
    student s(21,"Krish","PD");
    s.display();
}
