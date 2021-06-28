#include<bits/stdc++.h>
using namespace std;
removekey(vector<int>& arr,int key){
int i=0;
int j=arr.size()-1;

while(i<=j){
    if(arr[i]==key){
        swap(arr[i],arr[j]);
        j--;
    }
    else{
        i++;
    }
}
return (i);
}
int main(){
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;
int ans=removekey(arr,key);
for(int i=0;i<ans;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
