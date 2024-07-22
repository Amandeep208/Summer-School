// Move Zeros
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};

int main(){
    Solution s1;
    vector<int> number{1,0,2,0,3,0};
    s1.moveZeroes(number);

}