#include<bits/stdc++.h>
using namespace std;
 int numRookCaptures(vector<vector<char>>& grid) {
       int r=-1,c=-1;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(grid[i][j]=='R'){
               r=i;
                c=j;
                    break;
                }
            }
            if(r!=-1) break;
        }
        int ct=0;
        int i=r,j=c;
        while(i>0){
            if(grid[i-1][j]=='.'){
                i--;
            }
            else if(grid[i-1][j]=='p'){
                ct++;
                break;
            }
            else{
                break;
            }
        }
        i=r;
        while(i<7){
            if(grid[i+1][j]=='.'){
                i++;
            }
            else if(grid[i+1][j]=='p'){
                ct++;
                break;
            }
            else{
                break;
            }
        }
        i=r;
        while(j>0){
            if(grid[i][j-1]=='.'){
                j--;
            }
            else if(grid[i][j-1]=='p'){
                ct++;
                break;
            }
            else{
                break;
            }
        }
        j=c;
        while(j<7){
        if(grid[i][j+1]=='.'){
                j++;
            }
            else if(grid[i][j+1]=='p'){
                ct++;
                break;
            }
            else{
                break;
            }
    }
        return ct;
    }
int main(){
vector<vector<char>> arr(8,vector<char> (8));
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        cin>>arr[i][j];
    }
}
cout<<numRookCaptures(arr)<<endl;
return 0;
}
