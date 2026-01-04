#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age){
        cout << "I am parent constructor" << endl;
        this->name = name;
        this->age = age;
    }
};
class Student: public Person{
public:
    int roll;
    Student(string name,int age,int roll): Person(name, age){
        cout << " I am a child class " << endl;
        this->roll = roll;
        //other values are constructed in parent constructor.
    }
    void getInfo(){
        cout << name << endl;
        cout << age << endl;
        cout << roll << endl;
    }
};
int main(){
    Student s1("Arpan",34,123);
    // s1.name = "Arpan";
    // s1.age = 20;
    // s1.roll = 24;
    s1.getInfo();
    return 0;
}