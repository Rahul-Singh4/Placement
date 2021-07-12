#include<bits/stdc++.h>
using namespace std;
 string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string,int> umap;
        for(int i=0;i<paragraph.size();i++){
            if(isalpha(paragraph[i])){
                paragraph[i]=tolower(paragraph[i]);
            }
            else{
                paragraph[i]=' ';
            }
        }
        stringstream s(paragraph);
        string words;
        while(s>>words){
            umap[words]++;
        }
        for(auto i: banned){
            transform(i.begin(),i.end(),i.begin(),::tolower);
            if(umap.count(i)){
                umap.erase(i);
            }
        }
        int ans=INT_MIN;
        string sss;
        for(auto i: umap){
            if(ans<i.second){
                ans=i.second;
                sss=i.first;
            }
        }
        return sss;
    }
int main(){
string paragraph;
cin>>paragraph;
int n;
cin>>n;
vector<string> banned(n);
for(int i=0;i<n;i++){
    cin>>banned[i];
}
cout<<mostCommonWord(paragraph,banned);
return 0;
}
