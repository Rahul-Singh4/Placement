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
int r,c;
cin>>r>>c;
if(r*c!=n*m){
        for(auto i: arr){
            for(auto j:i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
}
else{
    vector<vector<int>> reshape(r,vector<int> (c));
    for(int i=0;i<r*c;i++){
        reshape[i/c][i%c]=arr[i/m][i%m];
    }
    for(auto i: reshape){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}

return 0;
}
