#include<bits/stdc++.h>
using namespace std;
  string thousandSeparator(int n) {
        string s=to_string(n);
        string ans="";
        int c=0;
        for(int i=s.size()-1;i>=0;i--,c++){
            if(c>0 and c%3==0){
                ans='.'+ans;
        }
        ans=s[i]+ans;
        }
        return ans;
    }
int main(){
int n;
cin>>n;
cout<<thousandSeparator(n)<<endl;
return 0;
}

