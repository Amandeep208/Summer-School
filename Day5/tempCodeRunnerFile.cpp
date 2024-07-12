
#include<iostream>
using namespace std;
class A{
    public:
        int x;
        static int val;
        A();
};
int A::val=0;
A::A(){
    exit(0);
    // if (val==0){
    //     val++;
    // }
    // else{
    //     __throw_runtime_error("Can't Create Objects");
    // }

}
int main(){
    A obj1,obj2,obj3,obj4;
    obj1.x=100;
    obj2.x=200;
    obj3.x=300;
    obj4.x=400;
    cout<<obj1.x;
    cout<<obj2.x;
    cout<<obj3.x;
    cout<<obj4.x;
    return 0;
}
