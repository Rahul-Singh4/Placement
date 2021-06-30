#include<bits/stdc++.h>
using namespace std;
vector<int> interesection(vector<int>& arr,vector<int>& brr){

unordered_map<int,int> u;
unordered_set<int> s;
for(auto i: arr){
    u[i]++;
}
for(auto i: brr){
    if(u.count(i)){
        s.insert(i);
    }
}
vector<int> v(s.begin(),s.end());
return v;
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int m;
cin>>m;
vector<int> brr(m);
for(int i=0;i<m;i++){
    cin>>brr[i];
}
vector<int> ans=interesection(arr,brr);
for(auto i: ans){
    cout<<i<<" ";
}
return 0;
}
