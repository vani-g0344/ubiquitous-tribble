#include <iostream>
#include <string>
using namespace std;

class Person{
    public:
        string name;
        int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

class Student : public Person{
    public:
        int rollNo;
    Student(string name, int age, int rollNo) : Person(name, age){
        this->rollNo = rollNo;
    }
};


int main(){

    return 0;
}