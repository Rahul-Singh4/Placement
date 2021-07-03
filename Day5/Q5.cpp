#include<bits/stdc++.h>
using namespace std;
  bool is_valid(vector<vector<int>>& img,int i,int j,int n,int m){
        if(i>=0 && i<n && j>=0 && j<m) return true;
        return false;
    }
int main(){
int n,m;
cin>>n>>m;
vector<vector<int>> img(n,vector<int> (m));
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>img[i][j];
    }
}
vector<vector<int>> filter(n,vector<int> (m));
        int dx[]={-1,-1,-1,0,0,1,1,1};
        int dy[]={-1,0,1,-1,1,-1,0,1};
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int sum=0,c=0,a,b;
                sum+=img[i][j];
                for(int k=0;k<8;k++){
                    a=i+dx[k];
                    b=j+dy[k];
                    if(is_valid(img,a,b,n,m)){
                        sum+=img[a][b];
                        c++;
                    }
                }
                filter[i][j]=ceil(sum/(c+1));

            }

        }
    for(auto i: filter){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }


return 0;
}
