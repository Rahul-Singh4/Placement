#include<bits/stdc++.h>
using namespace std;
string reformatDate(string date) {
        unordered_map<string,string> umap;
        umap["Jan"]="01";
        umap["Feb"]="02";
        umap["Mar"]="03";
        umap["Apr"]="04";
        umap["May"]="05";
        umap["Jun"]="06";
        umap["Jul"]="07";
        umap["Aug"]="08";
        umap["Sep"]="09";
        umap["Oct"]="10";
        umap["Nov"]="11";
        umap["Dec"]="12";
        string s="";
        int n=date.size();
        s+=date.substr(n-4);
        s+='-';
        string c=date.substr(n-8,3);

        s+=umap[c];
        s+='-';
        c=date.substr(0,n-11);
        if(c.size()==2)
        s+=c;
        else
        s+='0'+c;
        return s;
    }
int main(){
string date;
getline(cin,date);
cout<<reformatDate(date);
return 0;
}

