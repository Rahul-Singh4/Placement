#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int> nums(n);
for(int i=0;i<n;i++){
    cin>>nums[i];
}
sort(nums.begin(),nums.end());
if(nums[0]!=nums[1]){
    cout<<nums[0]<<endl;
}
else if(nums[n-1]!=nums[n-2]){
    cout<<nums[n-1]<<endl;
}
else {
    for(int i=1;i<n-1;i++){
        if(nums[i-1]!= nums[i] && nums[i]!=nums[i+1]){
            cout<<nums[i]<<endl;
            break;
        }
    }
}


return 0;
}
