#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> nums(n);
for(int i=0;i<n;i++)
    cin>>nums[i];
for(int i=0;i<n;i++){
        int flag=0;
    for(int j=0;j<n;j++){
        if(nums[i]==nums[j] && i!=j){
            flag=1;
            break;
        }
    }
    if(flag==0){
        cout<<nums[i]<<" ";
        break;
    }
}
return 0;
}
