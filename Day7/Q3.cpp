#include<bits/stdc++.h>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
vector<vector<int>> vec(n,vector<int> (m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>vec[i][j];
    }
}
 int v,ans=0;
        for(int i=0;i<vec.size();i++){
            auto lwr=upper_bound(vec[i].rbegin(),vec[i].rend(),-1);

            v=lwr-vec[i].rbegin();
            ans+=v;
        }
cout<<ans<<endl;
return 0;
}
