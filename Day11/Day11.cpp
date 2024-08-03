#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums{1,0,2,0,3};
    // int size=nums.size();
    // cout<<size;
    // vector<int> ob;
    // nums.shrink_to_fit();

    // for(auto i: nums){
    //     cout<<i;
    // }
    // for(int i:ob){
    //     cout<<i;
    // }
    nums.resize(3);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<endl;
    }

    return 0;
}