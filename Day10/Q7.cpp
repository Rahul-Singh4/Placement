#include<bits/stdc++.h>
using namespace std;
 string addStrings(string num1, string num2) {

        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
         int carry=0;
        string asn="";
       int i=0;
        int j=0;
        while(i<num1.size() && j<num2.size()){
            int a=num1[i]-'0';
            int b=num2[j]-'0';
            string s=to_string(a+b+carry);
            if(s.size()==2){
            carry=s[0]-'0';
            asn+=s[1];
            }
            else{
                carry=0;
                asn+=s[0];
            }
            i++;
            j++;
        }
        while(i<num1.size()){
            int a=num1[i]-'0';
            string s=to_string(a+carry);
            if(s.size()==2){
                carry=s[0]-'0';
                asn+=s[1];
            }
            else{
                carry=0;
                asn+=s[0];
            }
            i++;
        }
             while(j<num2.size()){
            int a=num2[j]-'0';
            string s=to_string(a+carry);
            if(s.size()==2){
                carry=s[0]-'0';
                asn+=s[1];
            }
            else{
                carry=0;
                asn+=s[0];
            }
            j++;
        }
        if(carry!=0){
            asn+=(carry+'0');
        }
        reverse(asn.begin(),asn.end());
        return asn;
    }
int main(){
string s,t;
cin>>s>>t;
cout<<addStrings(s,t)<<endl;
return 0;
}
