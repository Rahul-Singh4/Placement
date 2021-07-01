#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
string s;
cin>>s;
string v;
v.resize(s.size());
for(int i=0;i<s.size();i++){
    v[arr[i]]=s[i];
}
cout<<v<<endl;

return 0;
}

