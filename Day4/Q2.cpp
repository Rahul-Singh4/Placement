#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr.begin(),arr.end(),greater<int>());
        int sum=0;
        for(int i=1;i<n;i+=2){
            sum+=arr[i];
        }
cout<<sum<<endl;


return 0;
}

