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
    vector<vector<int>> p(n,vector<int> (m));
for(int i=0;i<n*m;i++){
    int t=(i+k)%(n*m);
    p[t/m][t%m]=arr[i/m][i%m];
}
for(auto i: p){
    for(int j: i){
        cout<<j<<" ";
    }
    cout<<endl;
}

return 0;
}
