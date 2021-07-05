#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>>& arr) {
        int n=arr.size();
          for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=1^arr[i][j];
        }
    }
        return arr;

    }
int main(){
int n,m;
cin>>n>>m;
vector<vector<int>> arr(n,vector<int> (m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}
vector<vector<int>> ans=flipAndInvertImage(arr);
for(auto i: ans){
    for(auto j:i){
        cout<<j<<" ";
    }
    cout<<endl;
}



return 0;
}
