#include <iostream>
using namespace std;

int main(){
    string password = "ABC123" , input;
    while(input != password){
        cout<<"Please Enter your Password ";
        cin>>input;
        if(input!=password){
            cout<<"Incorrect Password , Try again "<<endl;
            cout<<endl;
        }
    }
    cout<<"Correct Password";
    return 0;
}