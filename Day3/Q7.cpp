#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
int k;
cin>>k;
 string p;
       for(auto i: s){
           if(i==' '){
               k--;
           }
           if(k==0){
               break;
           }
           p+=i;
       }
cout<<p<<endl;
return 0;
}
