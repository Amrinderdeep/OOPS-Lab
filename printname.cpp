#include <iostream>
using namespace std;

int main(){
    
    string name; 
    cout<<"What is your name ?"<<endl;
    getline(cin, name);
    cout<<"Hi "<<name;
    return 0;
}