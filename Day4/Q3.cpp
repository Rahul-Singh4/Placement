#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
vector<int> v(arr.begin(),arr.end());
        sort(v.begin(),v.end());
        int i=0;
        int c=0;
        while(i<n){
            if(arr[i]!=v[i]){
                c++;
            }
            i++;
        }
        cout<<c<<endl;
return 0;
}

