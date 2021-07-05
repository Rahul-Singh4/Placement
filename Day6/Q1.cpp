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
 vector<vector<int>> A(m,vector<int> (n));

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                A[i][j]=arr[j][i];
            }
        }
for(auto i: A){
    for(auto j: i){
    cout<<j<<" ";
            }
    cout<<endl;
}




return 0;
}
