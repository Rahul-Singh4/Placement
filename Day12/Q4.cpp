#include<bits/stdc++.h>
using namespace std;
int main(){
uint32_t n;
cin>>n;
int c=0;
while(n){
   if(n&1)
    c++;
    n>>=1;
}
cout<<c<<endl;
return 0;
}
