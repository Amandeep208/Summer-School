#include<iostream>
#include<vector>
#include<set>
using namespace std;


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s1(nums.begin(),nums.end());
        nums = vector<int> (s1.begin(),s1.end());

        return s1.size();
    }
};
int main(){
    
    return 0;
}