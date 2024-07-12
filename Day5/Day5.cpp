//Concept of Friend Function
// #include<iostream>
// using namespace std;

// class B{
//     public:
//         void Addition();
//         void Subtraction();
// };
// class A{
//     int x,y;
//     friend void B::Addition(); //Friend Function
//     friend class B; //Friend Class
// };
// void B::Addition(){
//     A ob;
//     cout<<"Enter Two Numbers";
//     cin>>ob.x>>ob.y;
//     cout<<"Addition: "<<ob.x+ob.y;
// };
// int main(){
//     B obj;
//     obj.Addition();
//     return 0;
// }

// _____________________________________________________________________________________________
// Concept of Static Variable
// #include<iostream>
// using namespace std;
// class Test{
//     public:
//     int ID;
//     string name; //Non- static data member
//     static string clgname; //staic data member
// };
// string Test::clgname;
// int main(){
//     Test ob1,ob2,ob3,ob4;
//     ob1.ID;
//     ob1.name="Amit";
//     ob2.name="Rajat";
//     ob3.name="Virat";
//     ob4.name="Aakash";
//     cout<<ob1.name<<endl;
//     cout<<ob2.name<<endl;
//     cout<<ob3.name<<endl;
//     cout<<ob4.name<<endl;
//     ob1.clgname="MIET";
//     // ob2.clgname="GCET";
//     cout<<ob1.clgname<<endl;
//     cout<<ob2.clgname<<endl;
//     cout<<ob3.clgname<<endl;
//     cout<<ob4.clgname<<endl;
//     return 0;
// }

// _____________________________________________________________________________________________

// Write program to create a class that restrict users to create multiple objects. (if user create multiple objects all the objects points to a same memory location.)

// #include<iostream>
// using namespace std;
// class Test{
//     public:
//     static string clgname;
//     string name = "Andy Smith"; //Non static Data Member
//     void display();
//     static void show();
// };
// string Test::clgname="MIET";
// void Test::show(){
//     cout<<clgname<<endl;
//     Test ob;
//     cout<<ob.name<<endl;
// }
// void Test::display(){
//     cout<<clgname<<endl;
//     cout<<name<<endl;

// }
// int main(){
//     Test ob1,ob2,ob3;

//     return 0;
// }

// _____________________________________________________________________________________________
// Write a Program such that dosenot allow to make object

// #include<iostream>
// using namespace std;
// class A{
//     private:
//         int val;
//         A();
// };
// A::A(){
//     cin>>val;
// }
// int main(){
//     A obj;
//     return 0;
// }

// _____________________________________________________________________________________________
// Write a Program such that only one object is allowed.

#include<iostream>
using namespace std;
class A{
    private:
        A();
    public:
        int x;
        static int val;
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
-

// _____________________________________________________________________________________________
// WAP to count how many objects of a class is created.


// #include<iostream>
// using namespace std;
// class A{
//     public:
//         static int val;
//         A();
// };
// int A::val=0;
// A::A(){
//     val++;

// }
// int main(){
//     A obj1,obj2,obj3,obj4;
//     cout<<obj3.val;
//     return 0;
// }