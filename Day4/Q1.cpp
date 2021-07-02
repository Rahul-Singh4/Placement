#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>& arr,int st,int curr){
if(st==arr.size()) return curr;
return sum(arr,st+1,curr^arr[st])+sum(arr,st+1,curr);
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<sum(arr,0,0)<<endl;
return 0;
}
