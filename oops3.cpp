#include<iostream>
using namespace std;
class Person{
public:
     string name;
     int age;
};
class Student: public Person{
public:
      int rollno;
};
class Gradstudent: public Student{
public:
     int researchpaper;
};

int main(){
     Gradstudent s1;
     s1.name="aditya";
     cout<<s1.name;
     }
