#include <iostream>
#include <string>
using namespace std;

int sum(int x){
    
    int res=0;
    while(x!=0){
        int digit = x%10;
        res+=digit;
        x=x/10;
    }
    return res;
}

bool prime(int x){
    for (int i = x-1; i>=2;i--){
        if(x%i==0)return false;
    }
    return true;
}

int main(){
    string choice; 
    cout<<"What operation do you want to perform (sum / prime): ";
    cin>>choice;
    cout<<"Enter a number: ";
    int x;
    cin>>x;
    if(choice == "sum"){
        int ans = sum(x);
        cout<<ans<<endl;
    }
    else if (choice == "prime"){
        bool ans = prime(x);
        if(ans){
            cout<<"It is a prime number";
        }
        else{
            cout<<"It is not a prime number";
        }
    }
    else{
        cout<<"Invalid response";
    }
    return 0;
}