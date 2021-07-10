#include<bits/stdc++.h>
using namespace std;
bool isValid(string s) {
        stack<char> stk;
        int i=0;
        while(i<s.size()){
            if(stk.empty()){
                if(s[i]=='(' ||s[i]=='{'|| s[i]=='['){
                    stk.push(s[i]);
                }
                else{
                    return false;
                }
            }
            else{
                if(s[i]=='(' || s[i] =='{' ||s[i]=='['){
                    stk.push(s[i]);
                }
                else{
                    int flag=0;
                    if(s[i]==')' && stk.top()=='('){
                        stk.pop();
                        flag=1;
                    }
                    if(s[i]=='}' && stk.top() =='{'){
                        stk.pop();
                        flag=1;
                    }
                    if(s[i]==']' && stk.top()=='[')
                    {
                        stk.pop();
                        flag=1;
                    }
                    if(flag==0){
                        return false;
                    }
                }
            }
            i++;
        }
        if(stk.empty())
            return true;
        else
            return false;
    }
int main(){
    string s;
    cin>>s;
    isValid(s)==1?cout<<"true":cout<<"false";
return 0;
}
