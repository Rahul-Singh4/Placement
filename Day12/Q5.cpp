#include<bits/stdc++.h>
using namespace std;
bool isPowerOfTwo(int n) {
   return n > 0 && ((n & (-n)) == n);
    }
int main(){
int n;
cin>>n;
isPowerOfTwo(n)==1?cout<<"True":cout<<"False"<<endl;
return 0;
}
