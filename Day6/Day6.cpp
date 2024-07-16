/*Function OVerloading*/

// #include<iostream>
// using namespace std;
// class Output{
//     public:
//         void print(char ch){
//             cout<<ch;
//         }
//         void print(int ch){
//             cout<<ch;
//         }
//         void print(string ch){
//             cout<<ch;
//         }
//         void print(int x, int y){
//             cout<<x<<y;
//         }
        
// };
// int main(){
//     Output ob;
//     ob.print('A');
//     ob.print("man");
//     ob.print(2003);
//     ob.print(2,8);
//     return 0;
// }


/*operator overloding*/

// #include<iostream>
// using namespace std;
// class Number{
//     int x;
//     public:
//     Number(int val){
//         x=val;
//     }
//     int operator+(Number obj){
//         return x + obj.x;
//     }
//     int operator-(Number obj){
//         return x - obj.x;
//     }
//     int operator*(Number obj){
//         return x * obj.x;
//     }
//     double operator/(Number obj){
//         return x / obj.x;
//     }
//     int operator%(Number obj){
//         return x % obj.x;
//     }
//     bool operator==(Number obj){
//         return x == obj.x;
//     }
//     int operator--(){
//         return --x;
//     }
//     int operator--(int val){
//         return x--;
//     }
//     int operator++(){
//         return ++x;
//     }
//     int operator++(int val){
//         return x++;
//     }
// };
// int main(){
//     Number num1=89;
//     Number num2=34;
//     cout<<num1+num2<<endl;
//     cout<<num1-num2<<endl;
//     cout<<num1*num2<<endl;
//     cout<<num1/num2<<endl;
//     cout<<num1%num2<<endl;
//     cout<<(num1==num2)<<endl;
//     cout<<++num1<<endl;
//     cout<<num1++<<endl;
//     cout<<--num2<<endl;
//     cout<<num2--<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
class Number{
    int x,y;
    public:
        Number(int a, int b){
            x=a;
            y=b;
        }
        
}

int main(){
    
    return 0;
}