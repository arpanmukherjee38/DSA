#include<iostream>
#include<string>
using namespace std;
class Person{
public:
    //1. Constructor Oveloading
    string name;
    int age;
    //non-parameterized constructor
    Person(){
        cout << "I am a Non-parameterized Constructor" << endl;
    }
    //Parametrized Constructor
    Person(string name,int age){
        this->name = name;
        this->age = age;
        cout << "I am a Parameterized Constructor" << endl;
    }
};

//2.Function Overloading
class Print{
public:
//Here both functions are same.But when i class this functions either Int or char.
    void show(int x){
        cout << x << endl;
    }
    void show(char ch){
        cout << ch << endl;
    }
};

//Function Overiding: Run time polymorphism
class parent{
public:
    void getinfo(){
        cout << "I am parent" << endl;
    }
};
class child: public parent{
public:
    void getinfo(){
        cout << "I am child" << endl;
    }
};
int main(){
//Compile time polymorphism
    //Constructor Overloading
    // Person p1;
    Person p1("Arpan", 24);

    //Function Overloading
    Print s1;
    s1.show(213);
    s1.show('a');

//Run time polymorphism
    //Function overiding
    parent c1;
    c1.getinfo();
    child c2;
    c2.getinfo();

    return 0;
}