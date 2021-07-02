#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int c=-1;
  for(int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1]){
            c=i;
        break;
    }
}
cout<<c<<endl;
return 0;
}
