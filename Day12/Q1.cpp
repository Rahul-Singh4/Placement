#include<bits/stdc++.h>
using namespace std;
string radix_to_decimal(string s,int radix){
if(s.find('.')==-1){
    int res=0;
    for(int i=0;i<s.size();i++){
        res*=radix;
        res+=(s[i]-'0');
    }
    return to_string(res);
}
else{
    int rest=0;
    int i=s.find('.');
    for(int j=0;j<i;j++){
        rest*=radix;
        rest+=(s[j]-'0');
    }
string p=to_string(rest);

    double res=0;
    int  c=-1;
    for(int k=i+1;k<s.size();k++,c--){
        res+=(s[k]-'0')*1.00*(pow(radix,c));
    }
    string k=to_string(res);
    int ans=k.find('.');

    return p+k.substr(ans);
}
}
int main(){
string s;
cin>>s;
int radix;
cin>>radix;
cout<<radix_to_decimal(s,radix)<<endl;
return 0;
}
