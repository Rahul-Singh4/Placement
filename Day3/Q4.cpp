#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int first;
cin>>first;
vector<int> v;
v.push_back(first);
for(auto i: arr){
    v.push_back(i^v.back());
}
for(auto i:v)
    cout<<i<<" ";
return 0;
}

