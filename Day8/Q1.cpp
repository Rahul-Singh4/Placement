#include<bits/stdc++.h>
using namespace std;
bool solve(vector<vector<int>>& mat1,vector<vector<int>>& mat2){
int k=4;
int n=mat1.size();
while(k--){
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(mat1[i][j],mat1[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(mat1[i].begin(),mat1[i].end());
        }
    if(mat1==mat2) return true;
}
return false;
}
int main(){
int n;
cin>>n;
vector<vector<int>> mat1(n,vector<int> (n));
vector<vector<int>> mat2(n,vector<int> (n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>mat1[i][j];
    }
}
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>mat2[i][j];
    }
}
if(solve(mat1,mat2)){
    cout<<"true"<<endl;
}
else{
    cout<<"false"<<endl;
}
return 0;
}
