#include<bits/stdc++.h>
using namespace std;
string decimal_to_radix(string s,int radix){
if(s.find('.')==-1){
    string as="";
    int t,aa=stoi(s);
    while(aa>radix){
        t=aa%radix;
        as+=t+'0';
        aa/=radix;
    }
    string aaa="";
    aaa+=aa+'0';
     reverse(as.begin(),as.end());
      aaa+=as;
     return aaa;
}
else{
    int p=s.find('.');
    string as="";
    int t,aa=stoi(s.substr(0,p));
    while(aa>=radix){
        t=aa%radix;
        as+=t+'0';
        aa/=radix;
    }
    string aaa="";
    aaa+=aa+'0';
     reverse(as.begin(),as.end());
      aaa+=as;
    int aw=s.substr(p+1).size();
    int f=stoi(s.substr(p+1));
    string ass="";
    for(int i=0;i<6;i++){
        f*=radix;
        if(to_string(f).size()==aw){
            ass+="0";
        }
        else{
            ass+=to_string(f).substr(0,1);
            string k=to_string(f).substr(1);
            f=stoi(k);
        }
    }
return aaa+'.'+ass;
}
}
int main(){
string s;
cin>>s;
int radix;
cin>>radix;
cout<<decimal_to_radix(s,radix)<<endl;
return 0;
}
