#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> nums{1,0,2,0,3};
    // int size=nums.size();
    // cout<<size;
    vector<int> ob;
    nums.shrink_to_fit();

    for(auto i: nums){
        cout<<i;
    }
    // for(int i:ob){
    //     cout<<i;
    // }
    

    return 0;
}