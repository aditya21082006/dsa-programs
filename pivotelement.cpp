#include<iostream>
using namespace std;
int getpivot(int arr[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        int mid=(s+e)/2;
        if(arr[mid]>=arr[0]){
            s=mid+1;}
        else{
            e=mid;
        }
    }
    return e;
}
int main(){
    int arr[5] = {8,10,17,1,3};
    cout<<"Pivot is "<<getpivot(arr,5)<<endl;
}