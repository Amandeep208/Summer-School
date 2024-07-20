// #include<iostream>
// #include<memory.h>
// using namespace std;

// int main(){
//     int *ptr = new int;  //initialiizing nwe pointer variable with data type int
//     *ptr = 100; // allocating value 100 to the pointer variable
//     cout<<*ptr<<endl; //printing value


//     int *ptr1 = new int[5]; // initializing an array
//     for (int i=0;i<5;i++){
//         cin>>ptr1[i];
//     }
//     for (int i=0;i<5;i++){
//         cout<<ptr1[i]<<"\t";
//     }
//     cout<<endl;
//     for (int i=0;i<5;i++){
//         cout<<*(ptr1+i)<<"\t";
//     }
//     realloc(ptr1,10*sizeof(int));//reallocating the value
    
//     delete ptr;  // deleting the pointer variable
//     cout<<*ptr<<endl; //printing daging value of the pointer as the pointer is deleted
    

//     return 0;


// }

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> ob={1001,1002,1003,1004,1005};

//     //by using for each loop
//     for(int i: ob){
//         cout<<i<<"\t";
//     }

//     // as if we dont know the size of vector
//     int size = ob.size();
//     cout<<"\n";

//     ob[3]=1006;
//     //Accesing data using index
//     for (int i = 0; i < size; i++)
//     {
//         cout<<ob[i]<<"\t";
//     }
    

//     return 0;
// }


// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter Size of Array: ";
//     cin>>n;
//     vector<int> ob(n);
//     cout<<"Enter the value to the Vector Array: ";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>ob[i];
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout<<ob[i]<<"\t";
//     }
    
//     return 0;
// }

// Entering the values in the Vector using the push_back Function

// wap to store N elements in a vector and display them using loop, for each loop and using iterator
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> ob;
//     int n,val;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>val;
//         ob.push_back(val);
//     }
//     for (auto i:ob){
//         cout<<i<<"\t";
//     }
    
//     return 0;
// }

// WAP to display the elements of the vector in reverse order using iterator.

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> ob;
//     int n,val;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>val;
//         ob.push_back(val);
//     }
//     for (auto i=ob.rbegin(); i<ob.rend(); i++){
//         cout<<*(i)<<"\t";
//     }
//     return 0;
// }

// #WAP to display the element in reverse order using for loop

// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> ob;
//     int n,val;
//     cin>>n;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>val;
//         ob.push_back(val);
//     }
//     for (int i=n-1; i>=0; i--){
//         cout<<ob[i]<<"\t";
//     }
//     return 0;
// }

//WAP to delete  the value from the given position from the vector.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> ob;
    int n,val,pos;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        ob.push_back(val);
    }
    cout<<"Enter the Index of Value To be removed: ";
    cin>>pos;

    return 0;
}