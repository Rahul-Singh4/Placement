#include<bits/stdc++.h>
using namespace std;
int sumQuery(vector<int> arr,int left,int right){
int n=arr.size();
for(int i=1;i<n;i++){
    arr[i]+=arr[i-1];
}
if(left==0){
    return arr[right];
}
return arr[right]-arr[left-1];
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++) cin>>arr[i];
int m;
cin>>m;
int left,right;
while(m--){
        cin>>left>>right;
    int ans=sumQuery(arr,left,right);
cout<<ans<<endl;
}
return 0;
}
