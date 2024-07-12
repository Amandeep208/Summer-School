#include<iostream>
using namespace std;

struct test{
    public:
        int id=100;
        double id=200.3;
        string dept;


};
int main(){
    test obj1 = test();
    // obj1.id=100;
    // obj1.id=200;
    cout<<obj1.id;

    return 0;

}
