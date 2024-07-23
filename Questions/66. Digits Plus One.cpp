// Leet Code solution number 66

#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int size=digits.size();
        int i=size-1;
        while(i>=0){
            if(digits[i]<9){
                digits[i]=digits[i]+1;
                break;
            }
            digits[i] = 0;
            i--;
        }
        if(i==-1){
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
int main(){
    
    return 0;
}