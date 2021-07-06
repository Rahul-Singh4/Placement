#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<vector<int>> arr(n,vector<int> (m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
int k;
cin>>k;
vector<int> ans;
for(int j=0;j<m;j++){
    for(int i=0;i<n;i++){
        if((j>0 && arr[i][j]==0 && arr[i][j-1]==1) || (j==0 && arr[i][j]==0)){
            ans.push_back(i);
            k--;
        }
        if(k==0){
            break;
        }
    }
    if(k==0){
        break;
    }
}
for(auto i: ans){
    cout<<i<<" ";
}

return 0;
}
