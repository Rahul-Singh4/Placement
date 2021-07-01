#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
 map<int,int> m;

        for(auto i: v){
            m[i]++;
        }
        int s=0,a;
        for(auto i:m){
            a=i.second;
            m[i.first]=s;
            s+=a;
        }

        for(auto i: v){
            if(m.count(i)){
                cout<<m[i]<<" ";
            }
        }
return 0;
}
