// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     stack<string> st;
//     if(st.empty()){
//         cout<<"The stack is Not Empty"<<endl;
//     }
//     else{
//         cout<<"The stack is Empty"<<endl;
//     }
//     cout<<"Current Size: "<<st.size()<<endl;
//     st.push("Aman");
//     st.push("Vinayak");
//     st.push("Vanshak");
//     cout<<"Current Size: "<<st.size()<<endl;
//     if(st.empty()){
//         cout<<"The stack is Not Empty"<<endl;
//     }
//     else{
//         cout<<"The stack is Empty"<<endl;
//     }
//     cout<<"The top  element is : "<<st.top()<<endl;
//     st.pop();
//     cout<<"The top  element is : "<<st.top()<<endl;
    
//     //Traversing the data
//     stack<string> stack2=st;
//     while(!stack2.empty()){
//         cout<<stack2.top()<<endl;
//         stack2.pop();
//     }


//     //Now the stack 1 is Empty hence inputting values using push function
//     stack2.push("AAKASH");
//     stack2.push("RAGHAV");
//     stack2.push("PREET");

//     // Swap Function
//     st.swap(stack2);

//     //Printing values of st
//     cout<<"stack st"<<endl;
//     stack<string> stack1=st;
//     while(!stack1.empty()){
//         cout<<stack1.top()<<endl;
//         stack1.pop();
//     }

//     //Printing value of Stack2
//     cout<<"stack stack2"<<endl;
//     stack1=stack2;
//     while(!stack1.empty()){
//         cout<<stack1.top()<<endl;
//         stack1.pop();
//     }


//     return 0;
// }

#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q1;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    cout<<"The Size is"<<q1.size()<<endl;
    cout<<q1.back()<<endl;
    cout<<q1.front()<<endl;
    q1.pop();
    cout<<"The Size is"<<q1.size()<<endl;
    cout<<q1.back()<<endl;
    cout<<q1.front()<<endl;
    return 0;
}