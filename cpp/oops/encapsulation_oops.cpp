#include <iostream>
#include <string>
using namespace std;
class Teacher
{
private:           // access modifiers
    double salary; // data hiding
public:            // access modifiers
    // Constructor parameterized
    Teacher(string name, string dept)
    {
        this->name = name;
        this->dept = dept;
    }
    // copy constructor
    Teacher(Teacher &obj)
    {
        cout << "I am a copy constructor" << endl;
        this->name = obj.name;
        this->dept = obj.dept;
    }
    // Properties/atttributes
    string name;
    string dept;
    string subject;
    // methods / members function
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    void setSalary(double s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }

    void getInfo()
    {
        cout << name << endl;
        cout << dept << endl;
    }
};


//Dynamics memory allocationin Heap. Shallow Copy 


// class Student
// {
// public:
//     string name;
//     double *cgpaptr;
//     Student(string name, double cgpa)
//     {
//         this->name = name;
//         cgpaptr = new double;
//         *cgpaptr = cgpa;
//     }
//     Student(Student &obj){
//         this->name = obj.name;
//         this->cgpaptr = obj.cgpaptr;
//     }
//     void getInfo(){
//         cout << name << endl;
//         cout << *cgpaptr << endl;
//     }
// };




// Dynamics memory allocationin Heap. Deep Copy


// class Studentdeep
// {
// public:
//     string name;
//     double *cgpaptr1;
//     Studentdeep(string name, double cgpa)
//     {
//         this->name = name;
//         cgpaptr1 = new double;
//         *cgpaptr1 = cgpa;
//     }
//     Studentdeep(Studentdeep &obj)
//     {
//         this->name = obj.name;
//         cgpaptr1 = new double;
//         *cgpaptr1 = *obj.cgpaptr1;
//     }
//     void getInfo()
//     {
//         cout << name << endl;
//         cout << *cgpaptr1 << endl;
//     }
// };


// Destructor: deallocated the memory.
class Student
{
public:
    string name;
    double *cgpaptr;

    //Constructor: Parameterized
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaptr = new double;
        *cgpaptr = cgpa;
    }
    
    //Destructor: Deallocated
    ~Student() {
        cout << "Hi, I am delete Everythings" << endl;
        delete cgpaptr; //  memory data leak
    }
    void getInfo()
    {
        cout << name << endl;
        cout << *cgpaptr << endl;
    }
};
int main()
{
    // Object
    //  Teacher t1; // automatically calling constructor
    //  t1.name = "Arpan";
    //  t1.subject = "c++";
    //  t1.dept = "Computer science";
    //  t1.setSalary(25000);
    //  cout << t1.getSalary() << endl;
    //  cout << t1.dept << endl;
    //  t1.changeDept("Robotics");
    //  cout << t1.dept << endl;

    // Constructor
    // Teacher t1("arpan", "Robotics");
    // Teacher t2(t1);
    // t2.getInfo();

    //Shallow Copy
    // Student s1("Arpan", 8.9);
    // Student s2(s1);
    // s1.getInfo();
    
    // *(s2.cgpaptr) = 9.2;
    // s1.getInfo();

    //Deep copy
    // Studentdeep s1("Arpan", 8.9);
    // Studentdeep s2(s1);
    // s1.getInfo();

    // *(s2.cgpaptr1) = 9.2;
    // s1.getInfo();

    // s2.name = "neha";
    // s2.getInfo();


    //Destructor
    Student s1("arpan", 8.9);
    s1.getInfo();
    return 0;
}