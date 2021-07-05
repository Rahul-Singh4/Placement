#include<bits/stdc++.h>
using namespace std;
bool isToeplitzMatrix(vector<vector<int>>& arr) {
        int n=arr.size();
        int m=arr[0].size();
    int flag=true;
    for(int i=1;i<n;i++){

        for(int j=1;j<m;j++){
            if(arr[i-1][j-1]!=arr[i][j]){
                flag=false;
                break;
            }
        }
        if(!flag) break;
    }
        return flag;
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
isToeplitzMatrix(arr)==0?cout<<"NOT SPECIAL"<<endl:cout<<"SPECIAL "<<endl;

return 0;
}
