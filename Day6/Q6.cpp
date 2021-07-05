#include<bits/stdc++.h>
using namespace std;
int surfaceArea(vector<vector<int>>& grid) {
    int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
             if(grid[i][j]) ans+=(4*grid[i][j])+2;
                if(i>0) ans-=min(grid[i][j],grid[i-1][j])*2;
                if(j>0) ans-=min(grid[i][j],grid[i][j-1])*2;
            }
        }
        return ans;


    }
int main(){
int n,m;
cin>>n;
vector<vector<int>> arr(n,vector<int> (n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }
}

cout<<surfaceArea(arr)<<endl;




return 0;
}
