#include<iostream>
using namespace std;
class Teacher{
private:
    double salary;   
public:
    //non parametrized constructor
     Teacher(){
        dept="computer science";
     } 
     //parametrized constructor
     Teacher(string n,string d ,double s){
        name=n;
        dept=d;
        salary=s;}
    //copy constructor
    Teacher(Teacher &originalobj){
          this->name=originalobj.name;
          this->dept=originalobj.dept;
          this->salary=originalobj.salary;
    }
     string name;
     string dept;
};
int main(){
    Teacher t1("aditya","computer science",45000);
    Teacher t2(t1);
    cout<<t2.dept;}
