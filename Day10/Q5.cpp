#include<bits/stdc++.h>
using namespace std;
 bool canConstruct(string ransomNote, string magazine) {
        int arr[26]={0};
        for(auto i: magazine){
            arr[i-'a']++;
        }
        for(auto i: ransomNote){
            if(arr[i-'a']==0) return false;
            arr[i-'a']--;
        }
        return true;
    }
int main(){
string ransomNote,magazine;
cin>>magazine>>ransomNote;
canConstruct(ransomNote,magazine)==1?cout<<"True":cout<<"False"<<endl;
return 0;
}
