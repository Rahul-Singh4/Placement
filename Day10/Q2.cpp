#include<bits/stdc++.h>
using namespace std;
string convertToTitle(int columnNumber) {

        string c="";
        char p;
        while(columnNumber){
            p=(columnNumber-1)%26 + 'A';
            c=p+c;
            columnNumber=(columnNumber-1)/26;
        }
        return c;


    }
int main(){
int n;
cin>>n;
cout<<convertToTitle(n)<<endl;
return 0;
}
