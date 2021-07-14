#include<bits/stdc++.h>
using namespace std;
    bool isPowerOfFour(uint32_t pt) {
        if(pt && !(pt&(pt-1))){
            int c=0;
            while(pt>1){
                c++;
                pt>>=1;
            }
            return c&1?false:true;
        }
        return false;
    }
int main(){
uint32_t n;
cin>>n;
isPowerOfFour(n)==1?cout<<"TRUE":cout<<"FALSE";
return 0;
}
