#include<bits/stdc++.h>
using namespace std;
vector<bool> extraChocholate(vector<int>& arr,int k){
int v=*max_element(arr.begin(),arr.end());
vector<bool> sol;
for(auto i: arr){
    if(i+k<v){
        sol.push_back(false);
    }
    else{
        sol.push_back(true);
    }
}
return sol;
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
int k;
cin>>k;
vector<bool> ans=extraChocholate(arr,k);
for(auto i: ans){
    i==0?cout<<"false"<<" ":cout<<"true"<<" ";
}

return 0;
}
