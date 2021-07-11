#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string s, string t) {
        map<char,int> umap;
        for(auto i: s){
            umap[i]++;
        }
        for(auto i: t){
            if(umap.count(i)){
                umap[i]--;
                if(umap[i]==0){
                    umap.erase(i);
                }
            }
            else{
                return false;
            }
        }
        return umap.size()==0;
}
int main(){
string s,t;
cin>>s>>t;
isAnagram(s,t)==1?cout<<"Anagram":cout<<"Not Anagram"<<endl;
return 0;
}
