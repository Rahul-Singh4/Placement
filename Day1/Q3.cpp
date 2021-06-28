#include<bits/stdc++.h>
using namespace std;
vector<int> sequence(const vector<int>& arr){
 int n=arr.size();
 int mid=n/2;
    vector<int> v(n);
    int c=0;
    for(int i=0;i<mid;i++){
        v[c++]=arr[i];
        v[c++]=arr[i+mid];
    }
return v;
}
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<int> arr=sequence(v);

for(auto i: arr){
    cout<<i<<" ";
}
return 0;
}
