#include<bits/stdc++.h>
using namespace std;
// int LongestSub(string s,int k){
//     int count=0; //output=5
//     int maxlen=0;
//     for(int i=0;i<s.size();i++){
//         // mp.erase();
//         unordered_map<char,int>mp;
//         for(int j=i;j<s.size();j++){
//             mp[s[j]]++;
//             if(mp.size()<=k){
//                 maxlen=max(maxlen,j-i+1);
//             }else{
//                 break;
//             }
//         }
//     }
//     return maxlen;
// }
int LongestSub(string s,int k){
    int count=0; //output=5
    int maxlen=0;
    int i=0;
    int j=0;
    unordered_map<char,int>mp;
    while(j<s.size()){
        mp[s[j]]++;
        if(mp.size()<=2){
            maxlen=max(maxlen,j-i+1);
        }
            if(mp.size()>2){
                mp[s[i]]--;
                if(mp[s[i]]==0){
                    mp.erase(s[i]);
                }
                i++;
            }
        
        j++;
    }
    return maxlen;
}
int main(){
    int k;
    cout<<"enter k value";
    cin >> k;
    cout<<endl;
    string s="abbabca";
    int res=LongestSub(s,k);
    cout<<res<<" ";
    return 0;
}