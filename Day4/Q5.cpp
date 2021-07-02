#include<bits/stdc++.h>
using namespace std;
bool static comp(pair<int,int> a,pair<int,int> b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second<b.second;
    }
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
 vector<pair<int,int>> m(arr.size());
        for(int i=0;i<arr.size();i++){
            m[i].first=arr[i];
            m[i].second=0;
        }
        int k=0;
    for(auto i: arr){
        string a=bitset<64>(i).to_string();
        int c=0;
        for(auto j: a){
            if(j=='1'){
                c++;
            }
        }
        m[k++].second=c;
    }

        sort(m.begin(),m.end(),comp);
        vector<int> vec(arr.size());
        for(int i=0;i<arr.size();i++){
            vec[i]=m[i].first;
        }
        for(auto i: vec){
            cout<<i<<" ";
        }
return 0;
}
