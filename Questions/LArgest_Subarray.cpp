#include<iostream>
#include<vector>
#include<numeric>
#include<limits.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int sum=0;
        vector<int> subarray;
        for(auto i=nums.begin();i<nums.end();i++){
            sum=sum+*i;
            if(sum>max){
                max=sum;
            }
            if(sum<0){
                sum=0;
            }
            }
        return max;
        }
};

int main(){
    return 0;
}