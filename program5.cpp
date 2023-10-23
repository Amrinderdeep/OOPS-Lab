#include <iostream>
using namespace std;

int main(){
    int a , b;
    cout<<"Please Enter two numbers "<<endl;
    cin>>a;
    cin>>b;

    cout<<"Addition of the two numbers is ";
    double sum = a+b;
    cout<<sum<<endl;

    cout<<"Subtraction of the two numbers is ";
    double sub = a-b;
    cout<<sub<<endl;
    
    cout<<"Multiplication of the two numbers is ";
    double mul = a*b;
    cout<<mul<<endl;

    cout<<"Division of the two numbers is ";
    double div = a/b;
    cout<<div<<endl;
    return 0;
}