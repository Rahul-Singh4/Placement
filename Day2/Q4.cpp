#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
unordered_map<int,int> m;
int ans=0;
for(auto i: arr){
    if(m.count(i)){
        ans+=m[i];
    }
    m[i]++;
}
cout<<ans<<endl;
return 0;
}
