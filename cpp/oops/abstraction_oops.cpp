#include<iostream>
#include<string>
using namespace std;
class Shape{// automatically call abstraction
    virtula void draw() = 0;
};
class Circle: public Shape{
public: 
    void draw(){
        cout << "drawwing a circle\n";
    }
};
int main(){
    Circle c1;
    c1.draw();
    return 0;
}