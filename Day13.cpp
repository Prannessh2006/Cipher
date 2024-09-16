#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next=nullptr;
};
int main() {
    Node* head = new Node;
    head->data=1;
    cout << head->data;
    
    return 0;
}
