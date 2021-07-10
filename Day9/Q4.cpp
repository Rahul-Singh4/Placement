#include<bits/stdc++.h>
using namespace std;
int strStr(string haystack, string needle) {
        if(needle.size()==0 ) return 0;
        if(haystack.find(needle)!=-1){
            return haystack.find(needle);
        }
        return -1;

    }
int main(){
string haystack,needle;
cin>>haystack;
cin>>needle;
int position=strStr(haystack,needle);
cout<<position<<endl;
return 0;
}
