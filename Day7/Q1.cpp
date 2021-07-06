#include<bits/stdc++.h>
using namespace std;
int main(){
int m,n;
cin>>n>>m;
vector<vector<int>> mat(n,vector<int> (m));
int p=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>mat[i][j];
    }
}
 int a,b,c;
        for(int i=0;i<n;i++){
            a=INT_MIN,b=INT_MAX;
            for(int j=0;j<m;j++){
                if(b>mat[i][j]){
                    b=mat[i][j];
                    c=j;
                }
            }
            for(int j=0;j<n;j++){
                if(a<mat[j][c]){
                    a=mat[j][c];
                }
            }
            if(a==b){
                cout<<a<<endl;
                break;
            }
        }

return 0;
}
