#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;
    //address of operator-&
    cout<<"address of num "<<&num<<endl;
    int*ptr=&num;
    cout<<"address is "<<ptr<<endl;
    cout<<"value is "<<*ptr<<endl;
    cout<<"size is "<<sizeof(ptr)<<endl;
    //copying a pointer
    int*q=ptr;
    cout<<q<<"-"<<ptr<<endl;
    cout<<*q<<"-"<<*ptr<<endl;
}