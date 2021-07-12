#include<bits/stdc++.h>
using namespace std;
 vector<string> findWords(vector<string>& words) {
        string s1="qwertyuiop";
        string s2="asdfghjkl";
        string s3="zxcvbnm";
        vector<string> res;
        int n=words.size();
        for(int i=0;i<n;i++){
            int p=0;
            for(int j=0;j<words[i].size();j++){
             char c=tolower(words[i][j]);
                int ans=0,prev;
                if(s1.find(c)!=-1){
                    ans=1;
                }
                else if(s2.find(c)!=-1){
                    ans=2;
                }
                else{
                    ans=3;
                }
                if(j==0){
                    prev=ans;
                }
                else if(prev!=ans){
                    p=1;
                    break;
                }
            }
            if(p==0){
                res.push_back(words[i]);
            }
        }
        return res;
 }
int main(){
int n;
cin>>n;
vector<string> words(n);
for(int i=0;i<n;i++){
    cin>>words[i];
}
vector<string> s=findWords(words);
for(auto i:s){
    cout<<i<<" ";
}
return 0;
}
