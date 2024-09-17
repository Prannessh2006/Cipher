//use of using two classes
#include<iostream>
using namespace std;
class add{
    int value;
    public:
    add(int);
    void diff(add& b);
};
add::add(int v){
    this->value=v;
}
void add::diff(add& b){
    cout << this->value+b.value;
}
int main(){
    add sethu(19);
    add andrew(18);
    sethu.diff(andrew);
}
