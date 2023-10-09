#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Enter two numbers "<<endl;
    cin>>a;
    cin>>b;
    if(a > b){
        cout<<"The larger number is "<<a;
    }else if(b>a){
        cout<<"The larger number is "<<b;
    }else cout<<"Equal";
    return 0;
}