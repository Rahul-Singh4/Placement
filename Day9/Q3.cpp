#include<bits/stdc++.h>
using namespace std;
string addBinary(string a, string b) {
        int n=a.size(), m=b.size(), i=n-1, j=m-1,carry=0,k=0,c=0;
        string s="";
        while(i>=0 || j>=0 || carry==1){
          k=i>=0?a[i--]-'0':0;
          c=j>=0?b[j--]-'0':0;
        s+=(k^c^carry)+'0';
        carry=((k&c)+(carry&(k^c)));
        }
        reverse(s.begin(),s.end());
        return s;
    }
int main(){
string a,b;
cin>>a>>b;
string s=addBinary(a,b);
cout<<s<<endl;
return 0;
}
