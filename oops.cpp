#include<iostream>
using namespace std;
class Teacher{
private:
    double salary;   
public:
     Teacher(){
        dept="computer science";
     } 
     string name;
     string dept;
    
    //setter
    void setsalary(double s){
        salary=s; 
     }
    double getsalary(){
       return salary;
         }
};
int main(){
    Teacher t1;
    t1.setsalary(10000);
    cout<<t1.getsalary()<<endl;
    cout<<t1.dept;
    
    
}
