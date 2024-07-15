#include<iostream>
using namespace std;
class Output{
    public:
        void print(char ch){
            cout<<ch;
        }
        void print(int ch){
            cout<<ch;
        }
        void print(string ch){
            cout<<ch;
        }
        
};
int main(){
    Output ob,ob1,ob2;
    ob.print('A');
    ob.print("man");
    ob.print(2003);
    return 0;
}