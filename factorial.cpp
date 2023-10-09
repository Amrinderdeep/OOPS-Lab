#include <iostream>
using namespace std;

int main(){
    int num , ans = 1;
    cout<<"Enter the number for factorial ";
    cin>>num;
    int temp = num;
    for(int i = 0; i<num; i++){
        ans *= temp;
        temp--;
    }
    cout<<"The factorial of the number is "<<ans;
    return 0;
}