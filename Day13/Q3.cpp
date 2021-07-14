#include<bits/stdc++.h>
using namespace std;
vector<int> countBits(int num) {
    vector<int> vec(num+1,0);
    int i=0;
    for(i=1;i<=num;i++){
        if(i&1){
            vec[i]=vec[i/2]+1;
        }
        else{
                vec[i]=vec[i/2];
        }
    }
    return vec;
}
int main(){
int n;
cin>>n;
vector<int> ans=countBits(n);
for(auto i: ans){
    cout<<i<<" ";
}
return 0;
}
