#include<iostream>
using namespace std;
int main(){
    int arr[2][2];
    int result=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            arr[i][j]=++result;
        }
    }
    int lar=0;
    int rowindex=-1;
    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<2;j++){
            sum=sum+arr[i][j];
            if(sum>lar){ 
                lar=sum;
                rowindex= i; }
        }
    }
    cout<<lar<<endl;
    cout<<rowindex;
}