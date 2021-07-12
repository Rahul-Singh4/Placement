#include<bits/stdc++.h>
using namespace std;
 vector<int> shortestToChar(string s, char c) {
        vector<int> ans(s.size(),10000);
        int v=-10000;
        for(int i=0;i<s.size();i++){
            if(s[i]==c) v=i;
            ans[i]=i-v;
        }
        for(int i=v-1;i>=0;i--){
            if(s[i]==c) v=i;
           ans[i]=min(ans[i],v-i);
        }
        return ans;

    }
int main(){
string s;
cin>>s;
char c;
cin>>c;
vector<int> ans=shortestToChar(s,c);
for(auto i: ans){
    cout<<i<<" ";
}
return 0;
}

