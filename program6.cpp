#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter a number "<<endl;
    cin>>a;

    cout<<"Examples of Unary Operators "<<endl;
    int post = a++;
    cout<<"Increment Operator Post Increment (a++): "<<post<<endl;
    int pre = ++a;
    cout<<"Increment Operator Pre Increment (++a): "<<pre<<endl;

    post = a--;
    cout<<"Decrement Operator Post Decrement (a--): "<<post<<endl;
    pre = --a;
    cout<<"Decrement Operator Pre Decrement (--a): "<<pre<<endl;

    return 0;
}