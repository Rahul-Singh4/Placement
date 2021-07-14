#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> vec(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}
int t=0;
t=accumulate(vec.begin(),vec.end(),t);
int p=0;
p=((n+1)*(n))/2;

cout<<p-t<<endl;

return 0;
}
