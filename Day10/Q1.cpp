#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(isalnum(s[i]) && isalnum(s[j]) ){
                if((tolower(s[i])==tolower(s[j])) ){
                    i++;
                    j--;
                }
                else{
                    return false;
                }
            }
            else if(isalnum(s[i]))  j--;
            else if(isalnum(s[j]))  i++;
            else{
                j--; i++;
            }
        }
        return true;
    }
int main(){
string s;
cin>>s;
isPalindrome(s)==1?cout<<"Palindrome":cout<<"Not Palindrome";
return 0;
}
