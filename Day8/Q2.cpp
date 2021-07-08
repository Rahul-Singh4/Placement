#include<bits/stdc++.h>
using namespace std;
string solve(vector<string>& vec){
        string s="";
        int n=vec.size();
        if(n==1){
            return vec[0];
        }
        int c=0;
        while(true){
        for(int i=0;i<n-1;i++){
            if(vec[i].size()==c || vec[i][c]!=vec[i+1][c]){
                return s;
            }
        }
            s+=vec[0][c];
            c++;
        }
}
int main(){
int n;
cin>>n;
vector<string> vec(n);
for(int i=0;i<n;i++){
    cin>>vec[i];
}
string s=solve(vec);
cout<<s<<endl;
return 0;
}
