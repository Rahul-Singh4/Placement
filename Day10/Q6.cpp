#include<bits/stdc++.h>
using  namespace std;
 int longestPalindrome(string s) {
        map<char,int> m;
        for(auto i: s){
            m[i]++;
        }
        int count=0;
        int flag=0;
        for(auto i:m){
            if(i.second==1 && flag==0){
                count+=i.second;
                flag=1;
            }
            else if(!(i.second&1)){
                count+=i.second;
            }
            else if(i.second&1){
                if(flag){
                    count+=i.second-1;
                }
                else{
                    count+=i.second;
                    flag=1;
                }
            }
        }
        return count;
    }
int main(){
string s;
cin>>s;
cout<<longestPalindrome(s)<<endl;
return 0;
}
