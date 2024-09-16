#include <iostream>
using namespace std;
//Question1
class Car{
    string brand,model,engine;
    int seats;
    public:
    Car(string,string,string,int);
    void display();
};
Car::Car(string a,string b,string c,int d){
    brand=a;
    model=b;
    engine=c;
    seats=d;
}
void Car::display(){
    cout << brand << model << engine << seats;
}
int main(){
    Car fi("Audi","R8","V8",2);
    fi.display();
}
//Question2
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Rectangle{
    int length,breadth;
    string name;
    public:
    Rectangle(string,int,int);
    Rectangle(Rectangle& cu){
        length = cu.length-1;
        breadth = cu.breadth-1;
        name = cu.name;
        cout << "Copy constructor called";
    }
    void display();
};
Rectangle::Rectangle(string a,int c,int d){
    name=a;
    length=c;
    breadth=d;
}
void Rectangle::display(){
    cout << length << breadth << name;
}
int main(){
    Rectangle big("Big",2,2);
    big.display();
    cout << "\n";
    Rectangle big2(big);
    cout  <<"\n";
    big2.display();
    
}
