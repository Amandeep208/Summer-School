#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> grid{{0,1,0,0},{1,1,1,0},{0,1,0,0},{1,1,0,0}};   //2d Vector
    int count = 0;
    for(int i=0; i<grid.size();i++){
        for(int j=0; j<grid[i].size();i++){
            if (grid[i][j]==1){
                count+=4;
                if( i-1 > 0 || grid[i-1][j]==1){
                    count-=2;
                }
                if (j-1 > 0 || grid[i][j-1]==1){
                    count-=2;
                }
            }
        }
    }
    cout<<count;
    return 0;
}

