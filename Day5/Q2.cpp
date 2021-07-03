#include<bits/stdc++.h>
using namespace std;
bool is_valid(vector<vector<int>>& arr,int i,int j,int n,int m){
if(i>=0 && i<n && j>=0 && j<m ) return arr[i][j];
return false;
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
int a,b,c,d,ans=0;
for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                a=is_valid(arr,i-1,j,n,m);
                b=is_valid(arr,i+1,j,n,m);
                c=is_valid(arr,i,j-1,n,m);
                d=is_valid(arr,i,j+1,n,m);
                ans+=4-(a+b+c+d);
                }
            }
        }
        cout<<ans<<endl;
return 0;
}
