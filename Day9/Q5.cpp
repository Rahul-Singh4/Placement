#include<bits/stdc++.h>
using namespace std;
 int lengthOfLastWord(string s) {
        int i=s.size()-1;
        while(i>=0 && isspace(s[i])){
            i--;
        }
        if(i==-1) return 0;
        int c=0;
        while(i>=0 && !isspace(s[i])){
           c++;
           i--;
        }
        return c;
    }
int main(){
string c;
getline(cin,c);
cout<<lengthOfLastWord(c)<<endl;
return 0;
}
