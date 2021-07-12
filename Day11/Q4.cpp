#include<bits/stdc++.h>
using namespace std;
  string reverseOnlyLetters(string s) {
        int i=0;
        int j=s.size();
        while(i<j){
            if(isalpha(s[i]) && isalpha(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isalpha(s[i])){
                j--;
            }
            else if(isalpha(s[j])){
                i++;
            }
            else{
                i++; j--;
            }
        }
        return s;
    }
int main(){
string s;
cin>>s;
cout<<reverseOnlyLetters(s)<<endl;
return 0;
}

