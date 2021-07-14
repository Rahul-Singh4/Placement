#include<bits/stdc++.h>
using namespace std;
 vector<string> readBinaryWatch(int turnedOn) {
       if(turnedOn<=8){
        vector<string> vec;
           int p,q;
       for(int i=0;i<12;i++){
            p=__builtin_popcount(i);
           for(int j=0;j<60;j++){
            q=__builtin_popcount(j);
            if(p+q==turnedOn){
                string t="";
                t+=to_string(i)+':';
                t+=(j<10)?'0'+to_string(j):to_string(j);
                vec.push_back(t);
            }
           }
       }
           return vec;
       }
        return {};
    }
int main(){
int n;
cin>>n;
vector<string> ans=readBinaryWatch(n);
for(auto i: ans){
    cout<<i<<" ";
}
return 0;
}
