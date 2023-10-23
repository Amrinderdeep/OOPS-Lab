#include <iostream>
using namespace std;

class sum{
    private:
        int x;
        int y;
        int res;

    public:
        sum(int a, int b){
            x=a;
            y=b;
        }
        void calcSum(){
            res=x+y;
            cout<<res;
        }
};

int main(){
    sum ob1(4,2);
    ob1.calcSum();
    return 0;
}