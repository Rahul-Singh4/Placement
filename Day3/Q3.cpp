#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
 for(int i=1;i<v.size();i+=2){
            int freq=v[i-1];
            for(int j=0;j<freq;j++){
                cout<<v[i]<<" ";
            }
        }
return 0;
}
