#include<bits/stdc++.h>
using namespace std;
 bool isVowel(char c){
        return c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U';
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.size();
        while(i<j){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isVowel(s[i])){
                j--;
            }
            else if(isVowel(s[j])){
                i++;
            }
            else{
                i++;
                j--;
            }
        }
        return s;
    }
int main(){
string s;
cin>>s;
cout<<reverseVowels(s)<<endl;
return 0;
}
