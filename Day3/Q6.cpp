
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
string allowed;
cin>>allowed;
cin>>n;
vector<string> words(n);
for(int i=0;i<n;i++){
    cin>>words[i];
}
 vector<int> a(26,0);
        for(auto i: allowed){
            a[i-'a']++;
        }
        int count=0;

        for(auto i: words){
            bool flag=true;
            for(auto j: i){
                if(a[j-'a']==0){
                    flag=false;
                    break;
                }
            }
            if(flag==true){
                count++;
            }
        }
    cout<<count<<endl;

return 0;
}

