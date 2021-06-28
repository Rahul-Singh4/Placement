#include<bits/stdc++.h>
using namespace std;
int removeduplicates(vector<int>& v){
int i=0;
int j=1;
int n=v.size();
while(j<n){
    if(v[i]!=v[j]){
        i++;
        v[i]=v[j];
    }
    j++;
}

return i+1;

}
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
int ans=removeduplicates(v);
for(int i=0;i<ans;i++){
    cout<<v[i]<<" ";
}
return 0;
}
