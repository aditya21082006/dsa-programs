#include<iostream>
using namespace std;
int power(int a,int b){
    //base case
    if(b==0) return 1;
    if(b==1) return a;
    //recursive case
    int ans1=power(a,b/2);
    if(b%2==0){
        return ans1*ans1;
    }
    else return a *ans1*ans1;
}
int main(){
    int a;
    int b;
    cin>>a>>b;
    int ans=power(a,b);
    cout<<ans;

}