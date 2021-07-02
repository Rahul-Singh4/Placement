
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<string> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 unordered_map<char,string> m;
        m['a']=".-";
        m['b']="-...";
        m['c']="-.-.";
        m['d']="-..";
        m['e']=".";
        m['f']="..-.";
        m['g']="--.";
        m['h']="....";
        m['i']="..";
        m['j']=".---";
        m['k']="-.-";
        m['l']=".-..";
        m['m']="--";
        m['n']="-.";
        m['o']="---";
        m['p']=".--.";
        m['q']="--.-";
        m['r']=".-.";
        m['s']="...";
        m['t']="-";
        m['u']="..-";
        m['v']="...-";
        m['w']=".--";
        m['x']="-..-";
        m['y']="-.--";
        m['z']="--..";
        unordered_set<string> us;
    for(auto i: arr){
        string s="";
        for(auto j:i){
            s+=m[j];
        }
        us.insert(s);
    }
    cout<<us.size()<<endl;
return 0;
}
