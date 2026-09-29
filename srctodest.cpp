#include<iostream>
using namespace std;
void reachdest(int src,int des){
    cout<<" source "<<src<<" destination "<<des<<endl;
    //base case
    if(src==des){
         cout<<"arrived"<<endl;
         return;}
   
    src++;
    reachdest(src,des);
}
int main(){
    int src=1;
    int des=5;
    reachdest(src,des);

}