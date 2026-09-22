#include<iostream>
using namespace std;
void printdecreasing(int n){
    //base case
    if(n==0)return;
    //recursive case
    cout<<n<<endl;
    printdecreasing(n-1);
}
int main(){
    int n;
    cin>>n;
    printdecreasing(n);
}