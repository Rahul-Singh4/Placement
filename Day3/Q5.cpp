#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int> ind(n);
for(int i=0;i<n;i++){
    cin>>ind[i];
}
 vector<int> v;
for(int i=0;i<n;i++){
        v.insert(v.begin()+ind[i],arr[i]);
}
for(auto i: v){
    cout<<i<<" ";
}


return 0;
}
