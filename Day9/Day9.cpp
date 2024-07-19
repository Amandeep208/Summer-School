#include<iostream>
#include<memory.h>
using namespace std;

int main(){
    int *ptr = new int;  //initialiizing nwe pointer variable with data type int
    *ptr = 100; // allocating value 100 to the pointer variable
    cout<<*ptr<<endl; //printing value


    int *ptr1 = new int[5]; // initializing an array
    for (int i=0;i<5;i++){
        cin>>ptr1[i];
    }
    for (int i=0;i<5;i++){
        cout<<ptr1[i]<<"\t";
    }
    cout<<endl;
    for (int i=0;i<5;i++){
        cout<<*(ptr1+i)<<"\t";
    }
    realloc(ptr1,10*sizeof(int));//reallocating the value
    
    delete ptr;  // deleting the pointer variable
    cout<<*ptr<<endl; //printing daging value of the pointer as the pointer is deleted
    

    return 0;


}